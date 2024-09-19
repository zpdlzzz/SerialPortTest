/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *ClearRecieveButton;
    QPushButton *OpenFileButton;
    QPushButton *SaveFileButton;
    QLabel *label_10;
    QPushButton *ClearSendButton;
    QPushButton *SendButton;
    QLineEdit *TimerLine;
    QLabel *label_11;
    QPushButton *ScanButton_5;
    QFrame *line;
    QFrame *line_2;
    QPushButton *ExitButton;
    QFrame *line_4;
    QTextEdit *SendEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ScanButton;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *IDBox;
    QLabel *label_3;
    QComboBox *BaudRateBox;
    QLabel *label_4;
    QComboBox *DataBitBox;
    QLabel *label_5;
    QComboBox *ParityBitBox;
    QLabel *label_6;
    QComboBox *StopBitBox;
    QPushButton *OpenButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *TextRecieveBox;
    QCheckBox *HexRecieveBox;
    QCheckBox *WrapRecieveBox;
    QCheckBox *StopRecieveBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *TextSendBox;
    QCheckBox *HexSendBox;
    QCheckBox *WrapSendBox;
    QCheckBox *checkBox_7;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_15;
    QTextBrowser *RecieveBrowser;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(900, 715);
        Widget->setMinimumSize(QSize(900, 715));
        Widget->setMaximumSize(QSize(900, 715));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(20);
        Widget->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 81, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(10);
        label->setFont(font1);
        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(250, 10, 61, 21));
        label_7->setFont(font1);
        label_8 = new QLabel(Widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(240, 530, 81, 21));
        label_8->setFont(font1);
        label_9 = new QLabel(Widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 290, 81, 21));
        label_9->setFont(font1);
        ClearRecieveButton = new QPushButton(Widget);
        ClearRecieveButton->setObjectName("ClearRecieveButton");
        ClearRecieveButton->setGeometry(QRect(40, 450, 143, 22));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(12);
        ClearRecieveButton->setFont(font2);
        OpenFileButton = new QPushButton(Widget);
        OpenFileButton->setObjectName("OpenFileButton");
        OpenFileButton->setGeometry(QRect(340, 530, 81, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font3.setPointSize(10);
        OpenFileButton->setFont(font3);
        SaveFileButton = new QPushButton(Widget);
        SaveFileButton->setObjectName("SaveFileButton");
        SaveFileButton->setGeometry(QRect(440, 530, 81, 21));
        SaveFileButton->setFont(font3);
        label_10 = new QLabel(Widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 480, 81, 31));
        label_10->setFont(font1);
        ClearSendButton = new QPushButton(Widget);
        ClearSendButton->setObjectName("ClearSendButton");
        ClearSendButton->setGeometry(QRect(40, 670, 143, 22));
        ClearSendButton->setFont(font2);
        SendButton = new QPushButton(Widget);
        SendButton->setObjectName("SendButton");
        SendButton->setGeometry(QRect(810, 640, 61, 21));
        SendButton->setFont(font3);
        TimerLine = new QLineEdit(Widget);
        TimerLine->setObjectName("TimerLine");
        TimerLine->setGeometry(QRect(50, 640, 101, 20));
        TimerLine->setFont(font1);
        label_11 = new QLabel(Widget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(160, 640, 21, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font4.setPointSize(11);
        label_11->setFont(font4);
        ScanButton_5 = new QPushButton(Widget);
        ScanButton_5->setObjectName("ScanButton_5");
        ScanButton_5->setGeometry(QRect(600, 670, 143, 22));
        ScanButton_5->setFont(font2);
        line = new QFrame(Widget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 280, 231, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Widget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 470, 231, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        ExitButton = new QPushButton(Widget);
        ExitButton->setObjectName("ExitButton");
        ExitButton->setGeometry(QRect(790, 670, 81, 21));
        ExitButton->setFont(font3);
        line_4 = new QFrame(Widget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(520, 530, 361, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        SendEdit = new QTextEdit(Widget);
        SendEdit->setObjectName("SendEdit");
        SendEdit->setGeometry(QRect(260, 560, 611, 101));
        SendEdit->setFont(font1);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 40, 175, 229));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ScanButton = new QPushButton(layoutWidget);
        ScanButton->setObjectName("ScanButton");
        ScanButton->setFont(font2);

        verticalLayout->addWidget(ScanButton);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        IDBox = new QComboBox(layoutWidget);
        IDBox->setObjectName("IDBox");
        IDBox->setFont(font1);
        IDBox->setEditable(false);

        gridLayout->addWidget(IDBox, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        BaudRateBox = new QComboBox(layoutWidget);
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->addItem(QString());
        BaudRateBox->setObjectName("BaudRateBox");
        BaudRateBox->setFont(font1);
        BaudRateBox->setEditable(true);

        gridLayout->addWidget(BaudRateBox, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        DataBitBox = new QComboBox(layoutWidget);
        DataBitBox->addItem(QString());
        DataBitBox->addItem(QString());
        DataBitBox->addItem(QString());
        DataBitBox->addItem(QString());
        DataBitBox->setObjectName("DataBitBox");
        DataBitBox->setFont(font1);

        gridLayout->addWidget(DataBitBox, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        ParityBitBox = new QComboBox(layoutWidget);
        ParityBitBox->addItem(QString());
        ParityBitBox->addItem(QString());
        ParityBitBox->addItem(QString());
        ParityBitBox->addItem(QString());
        ParityBitBox->setObjectName("ParityBitBox");
        ParityBitBox->setFont(font1);

        gridLayout->addWidget(ParityBitBox, 3, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        StopBitBox = new QComboBox(layoutWidget);
        StopBitBox->addItem(QString());
        StopBitBox->addItem(QString());
        StopBitBox->addItem(QString());
        StopBitBox->setObjectName("StopBitBox");
        StopBitBox->setFont(font1);

        gridLayout->addWidget(StopBitBox, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        OpenButton = new QPushButton(layoutWidget);
        OpenButton->setObjectName("OpenButton");
        OpenButton->setFont(font2);

        verticalLayout->addWidget(OpenButton);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(52, 320, 121, 119));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TextRecieveBox = new QCheckBox(layoutWidget1);
        TextRecieveBox->setObjectName("TextRecieveBox");
        TextRecieveBox->setFont(font4);

        verticalLayout_2->addWidget(TextRecieveBox);

        HexRecieveBox = new QCheckBox(layoutWidget1);
        HexRecieveBox->setObjectName("HexRecieveBox");
        HexRecieveBox->setFont(font4);

        verticalLayout_2->addWidget(HexRecieveBox);

        WrapRecieveBox = new QCheckBox(layoutWidget1);
        WrapRecieveBox->setObjectName("WrapRecieveBox");
        WrapRecieveBox->setFont(font4);

        verticalLayout_2->addWidget(WrapRecieveBox);

        StopRecieveBox = new QCheckBox(layoutWidget1);
        StopRecieveBox->setObjectName("StopRecieveBox");
        StopRecieveBox->setFont(font4);

        verticalLayout_2->addWidget(StopRecieveBox);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(50, 510, 121, 119));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        TextSendBox = new QCheckBox(layoutWidget2);
        TextSendBox->setObjectName("TextSendBox");
        TextSendBox->setFont(font4);

        verticalLayout_3->addWidget(TextSendBox);

        HexSendBox = new QCheckBox(layoutWidget2);
        HexSendBox->setObjectName("HexSendBox");
        HexSendBox->setFont(font4);

        verticalLayout_3->addWidget(HexSendBox);

        WrapSendBox = new QCheckBox(layoutWidget2);
        WrapSendBox->setObjectName("WrapSendBox");
        WrapSendBox->setFont(font4);

        verticalLayout_3->addWidget(WrapSendBox);

        checkBox_7 = new QCheckBox(layoutWidget2);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setFont(font4);

        verticalLayout_3->addWidget(checkBox_7);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(260, 670, 301, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        horizontalLayout->addWidget(label_12);

        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName("label_14");
        label_14->setFont(font3);

        horizontalLayout->addWidget(label_14);

        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        horizontalLayout->addWidget(label_13);

        label_15 = new QLabel(layoutWidget3);
        label_15->setObjectName("label_15");
        label_15->setFont(font3);

        horizontalLayout->addWidget(label_15);

        RecieveBrowser = new QTextBrowser(Widget);
        RecieveBrowser->setObjectName("RecieveBrowser");
        RecieveBrowser->setGeometry(QRect(260, 40, 611, 481));
        layoutWidget1->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        SendEdit->raise();
        label->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        ClearRecieveButton->raise();
        OpenFileButton->raise();
        SaveFileButton->raise();
        label_10->raise();
        ClearSendButton->raise();
        SendButton->raise();
        TimerLine->raise();
        label_11->raise();
        ScanButton_5->raise();
        line->raise();
        line_2->raise();
        ExitButton->raise();
        line_4->raise();
        RecieveBrowser->raise();
        layoutWidget1->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:700;\">\344\270\262\345\217\243\345\217\202\346\225\260</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-weight:700;\">\346\216\245\346\224\266\346\241\206</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-weight:700;\">\345\217\221\351\200\201\346\241\206</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-weight:700;\">\346\216\245\346\224\266\350\256\276\347\275\256</span></p></body></html>", nullptr));
        ClearRecieveButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\346\216\245\346\224\266\345\214\272\345\206\205\345\256\271", nullptr));
        OpenFileButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        SaveFileButton->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-weight:700;\">\345\217\221\351\200\201\350\256\276\347\275\256</span></p></body></html>", nullptr));
        ClearSendButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\345\217\221\351\200\201\345\214\272\345\206\205\345\256\271", nullptr));
        SendButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        TimerLine->setText(QCoreApplication::translate("Widget", "1000", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">ms</p></body></html>", nullptr));
        ScanButton_5->setText(QCoreApplication::translate("Widget", "\351\207\215\346\226\260\350\256\241\346\225\260\345\255\227\350\212\202", nullptr));
        ExitButton->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        SendEdit->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        ScanButton->setText(QCoreApplication::translate("Widget", "\346\211\253\346\217\217\344\270\262\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI';\">\344\270\262\345\217\243\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI';\">\346\263\242\347\211\271\347\216\207\357\274\232</span></p></body></html>", nullptr));
        BaudRateBox->setItemText(0, QCoreApplication::translate("Widget", "9600", nullptr));
        BaudRateBox->setItemText(1, QCoreApplication::translate("Widget", "300", nullptr));
        BaudRateBox->setItemText(2, QCoreApplication::translate("Widget", "600", nullptr));
        BaudRateBox->setItemText(3, QCoreApplication::translate("Widget", "1200", nullptr));
        BaudRateBox->setItemText(4, QCoreApplication::translate("Widget", "2400", nullptr));
        BaudRateBox->setItemText(5, QCoreApplication::translate("Widget", "4800", nullptr));
        BaudRateBox->setItemText(6, QCoreApplication::translate("Widget", "14400", nullptr));
        BaudRateBox->setItemText(7, QCoreApplication::translate("Widget", "19200", nullptr));
        BaudRateBox->setItemText(8, QCoreApplication::translate("Widget", "38400", nullptr));
        BaudRateBox->setItemText(9, QCoreApplication::translate("Widget", "56000", nullptr));
        BaudRateBox->setItemText(10, QCoreApplication::translate("Widget", "57600", nullptr));
        BaudRateBox->setItemText(11, QCoreApplication::translate("Widget", "115200", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI';\">\346\225\260\346\215\256\344\275\215\357\274\232</span></p></body></html>", nullptr));
        DataBitBox->setItemText(0, QCoreApplication::translate("Widget", "8", nullptr));
        DataBitBox->setItemText(1, QCoreApplication::translate("Widget", "5", nullptr));
        DataBitBox->setItemText(2, QCoreApplication::translate("Widget", "6", nullptr));
        DataBitBox->setItemText(3, QCoreApplication::translate("Widget", "7", nullptr));

        label_5->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI';\">\346\240\241\351\252\214\344\275\215\357\274\232</span></p></body></html>", nullptr));
        ParityBitBox->setItemText(0, QCoreApplication::translate("Widget", "None", nullptr));
        ParityBitBox->setItemText(1, QCoreApplication::translate("Widget", "Even", nullptr));
        ParityBitBox->setItemText(2, QCoreApplication::translate("Widget", "Mark", nullptr));
        ParityBitBox->setItemText(3, QCoreApplication::translate("Widget", "Odd", nullptr));

        label_6->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI';\">\345\201\234\346\255\242\344\275\215\357\274\232</span></p></body></html>", nullptr));
        StopBitBox->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        StopBitBox->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        StopBitBox->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        OpenButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200/\346\226\255\345\274\200\344\270\262\345\217\243", nullptr));
        TextRecieveBox->setText(QCoreApplication::translate("Widget", "ASCII\346\216\245\346\224\266", nullptr));
        HexRecieveBox->setText(QCoreApplication::translate("Widget", "Hex\346\216\245\346\224\266", nullptr));
        WrapRecieveBox->setText(QCoreApplication::translate("Widget", "\346\215\242\350\241\214\346\216\245\346\224\266", nullptr));
        StopRecieveBox->setText(QCoreApplication::translate("Widget", "\346\232\202\345\201\234\346\216\245\346\224\266", nullptr));
        TextSendBox->setText(QCoreApplication::translate("Widget", "ASCII\345\217\221\351\200\201", nullptr));
        HexSendBox->setText(QCoreApplication::translate("Widget", "Hex\345\217\221\351\200\201", nullptr));
        WrapSendBox->setText(QCoreApplication::translate("Widget", "\346\215\242\350\241\214\345\217\221\351\200\201", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-weight:700;\">\345\217\221\351\200\201\345\255\227\350\212\202\357\274\232</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-weight:700;\">\346\216\245\346\224\266\345\255\227\350\212\202\357\274\232</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
