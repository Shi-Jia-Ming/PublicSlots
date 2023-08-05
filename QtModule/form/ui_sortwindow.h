/********************************************************************************
** Form generated from reading UI file 'sortwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWINDOW_H
#define UI_SORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sortwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QMainWindow *sortwindow)
    {
        if (sortwindow->objectName().isEmpty())
            sortwindow->setObjectName(QString::fromUtf8("sortwindow"));
        sortwindow->resize(400, 300);
        sortwindow->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/icon/sortwindow.webp);"));
        centralwidget = new QWidget(sortwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 40, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        label->setFont(font);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 90, 311, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_2 = new QComboBox(horizontalLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(100, 30));
        comboBox_2->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(comboBox_2);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(100, 30));
        comboBox->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout->addWidget(pushButton);

        sortwindow->setCentralWidget(centralwidget);

        retranslateUi(sortwindow);

        QMetaObject::connectSlotsByName(sortwindow);
    } // setupUi

    void retranslateUi(QMainWindow *sortwindow)
    {
        sortwindow->setWindowTitle(QApplication::translate("sortwindow", "sortwindow", nullptr));
        label->setText(QApplication::translate("sortwindow", "\346\216\222\345\272\217", nullptr));
        comboBox->setItemText(0, QApplication::translate("sortwindow", "\345\200\222\345\272\217", nullptr));
        comboBox->setItemText(1, QApplication::translate("sortwindow", "\346\255\243\345\272\217", nullptr));

        pushButton->setText(QApplication::translate("sortwindow", "\347\202\271\345\207\273\346\216\222\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sortwindow: public Ui_sortwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWINDOW_H
