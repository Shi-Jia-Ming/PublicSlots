/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addwindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *addwindow)
    {
        if (addwindow->objectName().isEmpty())
            addwindow->setObjectName(QString::fromUtf8("addwindow"));
        addwindow->resize(400, 287);
        addwindow->setStyleSheet(QString::fromUtf8("background-image: url(:/icon/addwindow.webp);"));
        centralwidget = new QWidget(addwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 50, 371, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(140, 40));
        pushButton_2->setMaximumSize(QSize(140, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white;"));

        horizontalLayout->addWidget(pushButton_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(140, 40));
        pushButton->setMaximumSize(QSize(140, 40));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white;"));

        horizontalLayout->addWidget(pushButton);

        addwindow->setCentralWidget(centralwidget);

        retranslateUi(addwindow);

        QMetaObject::connectSlotsByName(addwindow);
    } // setupUi

    void retranslateUi(QMainWindow *addwindow)
    {
        addwindow->setWindowTitle(QApplication::translate("addwindow", "addwindow", nullptr));
        pushButton_2->setText(QApplication::translate("addwindow", "\345\242\236\345\212\240\345\255\246\347\224\237\346\225\260\346\215\256", nullptr));
        label->setText(QApplication::translate("addwindow", "&", nullptr));
        pushButton->setText(QApplication::translate("addwindow", "\345\242\236\345\212\240\350\200\203\346\240\270\346\226\271\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addwindow: public Ui_addwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
