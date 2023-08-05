/********************************************************************************
** Form generated from reading UI file 'delformwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELFORMWINDOW_H
#define UI_DELFORMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delformwindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *delformwindow)
    {
        if (delformwindow->objectName().isEmpty())
            delformwindow->setObjectName(QString::fromUtf8("delformwindow"));
        delformwindow->resize(400, 300);
        delformwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(delformwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 100, 271, 62));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(100, 30));

        horizontalLayout->addWidget(comboBox);

        textEdit = new QTextEdit(horizontalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        textEdit->setFont(font);

        horizontalLayout->addWidget(textEdit);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 100, 60));
        label->setMinimumSize(QSize(100, 60));
        label->setMaximumSize(QSize(100, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(230, 259, 160, 21));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        delformwindow->setCentralWidget(centralwidget);

        retranslateUi(delformwindow);

        QMetaObject::connectSlotsByName(delformwindow);
    } // setupUi

    void retranslateUi(QMainWindow *delformwindow)
    {
        delformwindow->setWindowTitle(QApplication::translate("delformwindow", "delformwindow", nullptr));
        comboBox->setItemText(0, QApplication::translate("delformwindow", "name", nullptr));
        comboBox->setItemText(1, QApplication::translate("delformwindow", "id", nullptr));

        textEdit->setPlaceholderText(QApplication::translate("delformwindow", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\255\246\347\224\237id\346\210\226\345\247\223\345\220\215", nullptr));
        label->setText(QApplication::translate("delformwindow", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        pushButton_2->setText(QApplication::translate("delformwindow", "\347\241\256\345\256\232", nullptr));
        pushButton->setText(QApplication::translate("delformwindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delformwindow: public Ui_delformwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELFORMWINDOW_H
