#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QTimer>
#include <QStringList>
#include <QSerialPort>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //默认设置
    SendByte=0;
    RecieveByte=0;
    ui->TextRecieveBox->setCheckState(Qt::Checked);
    ui->TextSendBox->setCheckState(Qt::Checked);
    // Times = 0;
    lineEditData = 1000;
    //信号与接收函数
    connect(serial,&QSerialPort::readyRead,this,&Widget::Data_Recieve);

    //默认定时器设置
    timer = new QTimer;
    timer->start(1);
    connect(timer,&QTimer::timeout,this,&Widget::TimerSend);
    // connect(timer,SIGNAL(timeout()),this,SLOT(TimerSend()));
}

Widget::~Widget()
{
    delete ui;
}

/*
点击“扫描串口”按钮的函数
使用的类：SerialPort SerialPortinfo
功能表述：点击“扫描串口”按钮后，扫描设备上连接且可用的所有串口，并将串口号输入到“串口号"右侧的列表栏中
*/
void Widget::on_ScanButton_clicked()
{
    ui->IDBox->clear();
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        QSerialPort COM;
        COM.setPort(info);
        if(COM.portName()== serial->portName() or COM.open(QIODevice::ReadWrite))
        {
            ui->IDBox->addItem(info.portName());
            COM.close();
        }
    }
}

/*
点击“打开串口”按钮的函数
使用的类：SerialPort SerialPortinfo
功能表述：点击“打开串口”按钮前，手动设置串口的基本设置：串口号、波特率停止位、数据位、校验位，
点击“打开串口”按钮后，按照点击前的设置连接选择的端口号。
且点击“打开串口”按钮后，无法修改这些参数，相关控件失能
*/
void Widget::on_OpenButton_clicked()
{
    //打开\关闭串口
    if(!serial->isOpen())
    {
        //设置串口名
        serial->setPortName(ui->IDBox->currentText());

        //设置波特率
        serial->setBaudRate(ui->BaudRateBox->currentText().toLong());

        //设置停止位
        switch (ui->StopBitBox->currentIndex())
        {
        case 0:serial->setStopBits(QSerialPort::OneStop);break;
        case 1:serial->setStopBits(QSerialPort::OneAndHalfStop);break;
        case 2:serial->setStopBits(QSerialPort::TwoStop);break;
        default:break;
        }

        //设置数据位
        switch(ui->DataBitBox->currentText().toInt())
        {
        case 5:serial->setDataBits(QSerialPort::Data5);break;
        case 6:serial->setDataBits(QSerialPort::Data6);break;
        case 7:serial->setDataBits(QSerialPort::Data7);break;
        case 8:serial->setDataBits(QSerialPort::Data8);break;
        default:break;
        }

        //设置校验位
        switch(ui->ParityBitBox->currentIndex())
        {
        case 0:serial->setParity(QSerialPort::NoParity);break;
        case 1:serial->setParity(QSerialPort::EvenParity);break;
        case 2:serial->setParity(QSerialPort::MarkParity);break;
        case 3:serial->setParity(QSerialPort::OddParity);break;
        default:break;
        }
        serial->open(QIODevice::ReadWrite);
        ui->OpenButton->setText("关闭此串口");
        //下位控件失能
        ui->ScanButton->setEnabled(false);
        ui->IDBox->setEnabled(false);
        ui->BaudRateBox->setEnabled(false);
        ui->DataBitBox->setEnabled(false);
        ui->ParityBitBox->setEnabled(false);
        ui->StopBitBox->setEnabled(false);
    }
    else
    {
        serial->close();
        ui->OpenButton->setText("打开此串口");
        //下位控件使能
        ui->ScanButton->setEnabled(true);
        ui->IDBox->setEnabled(true);
        ui->BaudRateBox->setEnabled(true);
        ui->DataBitBox->setEnabled(true);
        ui->ParityBitBox->setEnabled(true);
        ui->StopBitBox->setEnabled(true);

    }
}

/*
点击“清除发送区内容”按钮的函数
使用的类：QWidget
功能表述：点击“清除发送区内容”按钮，清空发送框里的内容
*/
void Widget::on_ClearSendButton_clicked()
{
    ui->SendEdit->clear();
}

/*
点击“发送”按钮的函数
使用的类：QWidget QMessageBox QStringList
功能表述：点击“发送”按钮，根据发送区设置其他复选框勾选的情况来发送发送框里的内容
如何实现：用if判断勾选了哪些发送设置，并对发送编辑区的内容进行相应的转换
*/
void Widget::on_SendButton_clicked()
{
    QByteArray bytearray;
    if(!serial->isOpen())
        return;
    //十六进制发送
    if(ui->HexSendBox->checkState()== Qt::Checked)
    {
        // bytearray = QByteArray::fromHex(ui->SendEdit->toPlainText().toUtf8()).data();
        QByteArray hexString = ui->SendEdit->toPlainText().toUtf8();
        QByteArray byteArray = QByteArray::fromHex(hexString); // 将十六进制字符串转换为字节数组
        const char* bytearray = byteArray.constData();
    }
    else
    //文本发送
    {
        bytearray = ui->SendEdit->toPlainText().toLocal8Bit().data();
    }
    //换行发送
    if(ui->WrapSendBox->checkState() == Qt::Checked)
    {
        bytearray.append("\r\n");
    }
    //对发送的字节计数
    SendByte += bytearray.length();
    ui->label_14->setText(QString::number(SendByte));
    //发送
    serial->write(bytearray);
}

/*
勾选“文本接收”按钮的函数
使用的类：QWidget
功能表述：勾选“文本接收”按钮后，取消勾选Hex接收和停止接收
*/
void Widget::on_TextRecieveBox_clicked()
{
    ui->TextRecieveBox->setCheckState(Qt::Checked);
    ui->HexRecieveBox->setCheckState(Qt::Unchecked);
    ui->StopRecieveBox->setCheckState(Qt::Unchecked);
}

/*
勾选“Hex接收”按钮的函数
使用的类：QWidget
功能表述：勾选“Hex接收”按钮后，取消勾选文本接收和停止接收
*/
void Widget::on_HexRecieveBox_clicked()
{
    ui->TextRecieveBox->setCheckState(Qt::Unchecked);
    ui->HexRecieveBox->setCheckState(Qt::Checked);
    ui->StopRecieveBox->setCheckState(Qt::Unchecked);
}

/*
勾选“停止接收”按钮的函数
使用的类：QWidget
功能表述：勾选“停止接收”按钮后，取消勾选Hex接收和文本接收
*/
void Widget::on_StopRecieveBox_clicked()
{
    ui->TextRecieveBox->setCheckState(Qt::Unchecked);
    ui->HexRecieveBox->setCheckState(Qt::Unchecked);
    ui->StopRecieveBox->setCheckState(Qt::Checked);
}

/*
勾选“文本发送”按钮的函数
使用的类：QWidget
功能表述：勾选“文本发送”按钮后，取消勾选Hex发送
*/
void Widget::on_TextSendBox_clicked()
{
    ui->TextSendBox->setCheckState(Qt::Checked);
    ui->HexSendBox->setCheckState(Qt::Unchecked);
}

/*
勾选“Hex发送”按钮的函数
使用的类：QWidget
功能表述：勾选“Hex发送”按钮后，取消勾选文本发送
*/
void Widget::on_HexSendBox_clicked()
{
    ui->TextSendBox->setCheckState(Qt::Unchecked);
    ui->HexSendBox->setCheckState(Qt::Checked);
}

/*
接收函数
使用的类：QWidget QMessageBox QStringList
功能表述：接收收到的消息，根据接收区设置复选框勾选的情况来接收消息，并将接受的消息显示在接收区中
如何实现：用if判断勾选了哪些接收设置，并对接收到的内容进行相应的转换
*/
void Widget::Data_Recieve()
{
    //接收
    if(ui->StopRecieveBox->checkState()!= Qt::Checked)
    {
        QByteArray buffer = serial->readAll();
        QString string = "";
        //对接收的字节计数
        RecieveByte += buffer.length();
        ui->label_15->setText(QString::number(RecieveByte));
        //文本接收
        if(ui->HexRecieveBox->checkState()!=Qt::Checked)
        {
            string += tr(buffer);
        }
        //Hex接收
        else
        {
            buffer = buffer.toHex().toUpper();
            string += tr(buffer);
        }
        //换行接收
        if(ui->WrapRecieveBox->checkState()==Qt::Checked)
        {
            string +="\r\n";
            ui->RecieveBrowser->moveCursor(QTextCursor::End);
            ui->RecieveBrowser->insertPlainText(string);
            ui->RecieveBrowser->moveCursor(QTextCursor::End);
        }
        //接收并在接收区显示
        else
        {
            ui->RecieveBrowser->moveCursor(QTextCursor::End);
            ui->RecieveBrowser->insertPlainText(string);
            ui->RecieveBrowser->moveCursor(QTextCursor::End);
        }
    }
}

/*
点击“清除接收区内容”按钮的函数
使用的类：QWidget
功能表述：点击“清除发送区内容”按钮，清空接收框里的内容
*/
void Widget::on_ClearRecieveButton_clicked()
{
    ui->RecieveBrowser->clear();
}

/*
点击“退出”按钮的函数
使用的类：QWidget
功能表述：点击“退出”按钮，退出整个串口调试助手
*/
void Widget::on_ExitButton_clicked()
{
    this->close();
}

/*
点击“重新计数字节”按钮的函数
使用的类：QWidget QStringList
功能表述：点击“重新计数字节”按钮，重新计数发送的字节和接收的字节
*/
void Widget::on_ScanButton_5_clicked()
{
    SendByte = 0;
    RecieveByte = 0;
    ui->label_14->setText(QString::number(SendByte));
    ui->label_15->setText(QString::number(RecieveByte));
}

/*
点击“打开文件”按钮的函数
使用的类：QWidget QStringList QMessageBox
功能表述：点击“打开文件”按钮后，可以选择文件转为文本于发送框中打开
*/
void Widget::on_OpenFileButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    //新建QFile对象
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::warning(this,tr("多文档编辑器"),
                             tr("无法读取文件 %1:\n%2")
                                 .arg(fileName,file.errorString()));
    }
    //新建文本流对象
    QTextStream in(&file);
    // 鼠标指针变为等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    //读取文件的全部文本内容，并添加到发送框中
    ui->SendEdit->setPlainText(in.readAll());
    //鼠标指针恢复为原来状态
    QApplication::restoreOverrideCursor();
    ui->RecieveBrowser->setVisible(true);
}

/*
点击“保存文件”按钮的函数
使用的类：QWidget QStringList QMessageBox
功能表述：点击“保存文件”按钮后，会将接收框中的文本内容保存与文件中
*/
void Widget::on_SaveFileButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this);
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        // %1和%2分别对应后面arg两个参数，/n起换行的作用
        QMessageBox::warning(this, tr("多文档编辑器"),tr("无法写入文件 %1：/n %2").arg(fileName, file.errorString()));
                                                   
    }
    QTextStream out(&file);
    // 鼠标指针变为等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    out << ui->RecieveBrowser->toPlainText();
    // 鼠标指针恢复原来的状态
    QApplication::restoreOverrideCursor();
}

/*
编辑“定时发送”文本框的函数
使用的类：QWidget QStringList
功能表述：编辑“定时发送”的文本框后，调整定时发送的间隔时间
*/
void Widget::on_TimerLine_editingFinished()
{
    if(ui->TimerLine->text().toInt()>0)
        lineEditData = ui->TimerLine->text().toInt();
}

/*
勾选“定时发送”的函数
使用的类：QWidget
功能表述：勾选“定时发送”后，会按下方时间为间隔发送发送区编辑的消息
*/
void Widget::TimerSend()
{
    Times++;
    if(Times>=lineEditData)
    {
        if(ui->checkBox_7->checkState()==Qt::Checked)
            Widget::on_SendButton_clicked();
        Times = 0;
    }
}

