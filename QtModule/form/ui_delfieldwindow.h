/********************************************************************************
** Form generated from reading UI file 'delfieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELFIELDWINDOW_H
#define UI_DELFIELDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delfieldwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *delfieldwindow)
    {
        if (delfieldwindow->objectName().isEmpty())
            delfieldwindow->setObjectName(QString::fromUtf8("delfieldwindow"));
        delfieldwindow->resize(400, 300);
        centralwidget = new QWidget(delfieldwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 100, 60));
        label->setMinimumSize(QSize(100, 60));
        label->setMaximumSize(QSize(100, 58));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 100, 281, 56));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(horizontalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border:1px solid;"));

        horizontalLayout->addWidget(textEdit);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(230, 260, 160, 20));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        delfieldwindow->setCentralWidget(centralwidget);

        retranslateUi(delfieldwindow);

        QMetaObject::connectSlotsByName(delfieldwindow);
    } // setupUi

    void retranslateUi(QMainWindow *delfieldwindow)
    {
        delfieldwindow->setWindowTitle(QApplication::translate("delfieldwindow", "delfieldwindow", nullptr));
        label->setText(QApplication::translate("delfieldwindow", "\345\210\240\351\231\244\350\200\203\346\240\270", nullptr));
        textEdit->setHtml(QApplication::translate("delfieldwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("delfieldwindow", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\350\200\203\346\240\270\346\226\271\345\274\217", nullptr));
        pushButton_2->setText(QApplication::translate("delfieldwindow", "\347\241\256\345\256\232", nullptr));
        pushButton->setText(QApplication::translate("delfieldwindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delfieldwindow: public Ui_delfieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELFIELDWINDOW_H
