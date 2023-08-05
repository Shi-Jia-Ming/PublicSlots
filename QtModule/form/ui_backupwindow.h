/********************************************************************************
** Form generated from reading UI file 'backupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUPWINDOW_H
#define UI_BACKUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_backupwindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *backupwindow)
    {
        if (backupwindow->objectName().isEmpty())
            backupwindow->setObjectName(QString::fromUtf8("backupwindow"));
        backupwindow->resize(400, 300);
        backupwindow->setStyleSheet(QString::fromUtf8("background-image: url(:/icon/backupwindow.webp);"));
        centralwidget = new QWidget(backupwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 70, 291, 161));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 40));
        pushButton->setMaximumSize(QSize(100, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 40));
        pushButton_2->setMaximumSize(QSize(100, 40));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color: rgb(255, 255, 255);\n"
"backdrop-filter:blur(3px);"));

        horizontalLayout->addWidget(pushButton_2);

        backupwindow->setCentralWidget(centralwidget);

        retranslateUi(backupwindow);

        QMetaObject::connectSlotsByName(backupwindow);
    } // setupUi

    void retranslateUi(QMainWindow *backupwindow)
    {
        backupwindow->setWindowTitle(QApplication::translate("backupwindow", "backupwindow", nullptr));
        pushButton->setText(QApplication::translate("backupwindow", "\345\244\207\344\273\275\346\225\260\346\215\256", nullptr));
        label->setText(QApplication::translate("backupwindow", "&", nullptr));
        pushButton_2->setText(QApplication::translate("backupwindow", "\346\201\242\345\244\215\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class backupwindow: public Ui_backupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUPWINDOW_H
