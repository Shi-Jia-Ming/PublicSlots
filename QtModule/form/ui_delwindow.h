/********************************************************************************
** Form generated from reading UI file 'delwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELWINDOW_H
#define UI_DELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delwindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QMainWindow *delwindow)
    {
        if (delwindow->objectName().isEmpty())
            delwindow->setObjectName(QString::fromUtf8("delwindow"));
        delwindow->resize(400, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        delwindow->setFont(font);
        delwindow->setStyleSheet(QString::fromUtf8("background-image: url(:/icon/del.webp);"));
        centralwidget = new QWidget(delwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 100, 401, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(120, 40));
        pushButton_2->setMaximumSize(QSize(9999999, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white;\n"
"font: 75 11pt \"Arial\";"));

        horizontalLayout->addWidget(pushButton_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(120, 40));
        pushButton->setMaximumSize(QSize(9999999, 40));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white;\n"
"font: 75 11pt \"Arial\";"));

        horizontalLayout->addWidget(pushButton);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 30, 100, 60));
        label_2->setMinimumSize(QSize(100, 60));
        label_2->setMaximumSize(QSize(100, 60));
        QFont font2;
        font2.setPointSize(11);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        label_2->setAlignment(Qt::AlignCenter);
        delwindow->setCentralWidget(centralwidget);

        retranslateUi(delwindow);

        QMetaObject::connectSlotsByName(delwindow);
    } // setupUi

    void retranslateUi(QMainWindow *delwindow)
    {
        delwindow->setWindowTitle(QApplication::translate("delwindow", "delwindow", nullptr));
        pushButton_2->setText(QApplication::translate("delwindow", "\345\210\240\351\231\244\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("delwindow", "&", nullptr));
        pushButton->setText(QApplication::translate("delwindow", "\345\210\240\351\231\244\350\200\203\346\240\270\346\226\271\345\274\217", nullptr));
        label_2->setText(QApplication::translate("delwindow", "\345\210\240\351\231\244\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delwindow: public Ui_delwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELWINDOW_H
