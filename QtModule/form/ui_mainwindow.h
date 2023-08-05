/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *uplabel;
    QVBoxLayout *verticalLayout;
    QPushButton *button1;
    QPushButton *rbutton;
    QPushButton *rbutton3;
    QPushButton *rbutton2;
    QPushButton *rbutton4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget;
    QWidget *tab_3;
    QWidget *widget_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label1;
    QLabel *label4;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QWidget *widget;
    QLabel *label_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, -2, 801, 601));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        uplabel = new QLabel(layoutWidget);
        uplabel->setObjectName(QString::fromUtf8("uplabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        uplabel->setFont(font);
        uplabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Arial\";\n"
"background-color: transparent;"));
        uplabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(uplabel);


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        button1 = new QPushButton(layoutWidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setMinimumSize(QSize(80, 20));
        button1->setMaximumSize(QSize(999999, 20));
        button1->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255)"));

        verticalLayout->addWidget(button1);

        rbutton = new QPushButton(layoutWidget);
        rbutton->setObjectName(QString::fromUtf8("rbutton"));
        rbutton->setMinimumSize(QSize(80, 80));
        rbutton->setMaximumSize(QSize(16777215, 16777215));
        rbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/icon/delete.png);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(rbutton);

        rbutton3 = new QPushButton(layoutWidget);
        rbutton3->setObjectName(QString::fromUtf8("rbutton3"));
        rbutton3->setMinimumSize(QSize(80, 80));
        rbutton3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border-image: url(:/icon/group.png)"));

        verticalLayout->addWidget(rbutton3);

        rbutton2 = new QPushButton(layoutWidget);
        rbutton2->setObjectName(QString::fromUtf8("rbutton2"));
        rbutton2->setMinimumSize(QSize(80, 80));
        rbutton2->setMaximumSize(QSize(16777215, 16777215));
        rbutton2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border-image: url(:/icon/add.png)"));

        verticalLayout->addWidget(rbutton2);

        rbutton4 = new QPushButton(layoutWidget);
        rbutton4->setObjectName(QString::fromUtf8("rbutton4"));
        rbutton4->setMinimumSize(QSize(80, 80));
        rbutton4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border-image: url(:/icon/edit.png)"));

        verticalLayout->addWidget(rbutton4);


        gridLayout->addLayout(verticalLayout, 0, 0, 3, 1);

        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(100, 60));
        tabWidget->setMaximumSize(QSize(700, 500));
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 691, 531));
        tableWidget->setStyleSheet(QString::fromUtf8("background-image:url(:/icon/databasebackground3.webp);\n"
"\n"
"color:rgb(119, 255, 217)\357\274\233"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, -10, 691, 541));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(18);
        widget_2->setFont(font1);
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/icon/avgbackground.webp);"));
        gridLayoutWidget = new QWidget(widget_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 80, 521, 221));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(gridLayoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        QFont font2;
        font2.setPointSize(18);
        label1->setFont(font2);
        label1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1px solid;\n"
"color: rgb(255, 255, 255);"));
        label1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label1, 0, 1, 1, 1);

        label4 = new QLabel(gridLayoutWidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setFont(font2);
        label4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1px solid;"));
        label4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label4, 1, 1, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(200, 40));
        comboBox_2->setMaximumSize(QSize(200, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(11);
        comboBox_2->setFont(font3);
        comboBox_2->setLayoutDirection(Qt::LeftToRight);
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(comboBox_2, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(200, 40));
        pushButton_2->setMaximumSize(QSize(200, 40));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 691, 521));
        widget->setMinimumSize(QSize(600, 400));
        widget->setMaximumSize(QSize(700, 9999999));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-image: url(:/icon/searchbackground2.webp)"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 50, 171, 61));
        QFont font4;
        font4.setPointSize(24);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(50, 120, 611, 301));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        tableWidget_2 = new QTableWidget(gridLayoutWidget_2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(tableWidget_2, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(200, 40));
        lineEdit_2->setMaximumSize(QSize(16777215, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:1px solid  black;\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(lineEdit_2);

        comboBox = new QComboBox(gridLayoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(100, 40));
        comboBox->setMaximumSize(QSize(100, 60));

        horizontalLayout_4->addWidget(comboBox);

        pushButton = new QPushButton(gridLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 40));
        pushButton->setMaximumSize(QSize(100, 40));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        uplabel->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        button1->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        rbutton->setText(QString());
        rbutton3->setText(QString());
        rbutton2->setText(QString());
        rbutton4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\255\246\347\224\237\346\225\260\346\215\256", nullptr));
        label1->setText(QApplication::translate("MainWindow", "\345\271\263\345\235\207\346\225\260", nullptr));
        label4->setText(QApplication::translate("MainWindow", "\345\276\227\345\210\260\347\232\204\345\271\263\345\235\207\346\225\260", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\347\202\271\345\207\273\350\216\267\345\276\227\345\271\263\345\235\207\345\200\274", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\345\206\205\345\256\271", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\347\202\271\345\207\273\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
