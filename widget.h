#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int Times,lineEditData;
private slots:
    void on_ScanButton_clicked();
    void on_OpenButton_clicked();
    void on_ClearSendButton_clicked();
    void on_SendButton_clicked();
    void on_TextRecieveBox_clicked();
    void on_HexRecieveBox_clicked();
    void on_StopRecieveBox_clicked();
    void on_TextSendBox_clicked();
    void on_HexSendBox_clicked();
    void Data_Recieve();
    void on_ClearRecieveButton_clicked();
    void on_ExitButton_clicked();
    void on_ScanButton_5_clicked();
    void on_OpenFileButton_clicked();
    void on_SaveFileButton_clicked();
    void on_TimerLine_editingFinished();
    void TimerSend();

private:
    Ui::Widget *ui;
    long int SendByte,RecieveByte;
    QTimer *timer = new QTimer(this);
    QSerialPort *serial = new QSerialPort;
};
#endif // WIDGET_H
