//
// Created by Stark on 2023/6/29.
//

// You may need to build the project (run Qt uic code generator) to get "ui_addfieldwindow.h" resolved

#include "../header/addfieldwindow.h"
#include "../form/ui_addfieldwindow.h"


addfieldwindow::addfieldwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::addfieldwindow) {
    ui->setupUi(this);

}

addfieldwindow::~addfieldwindow() {
    delete ui;
}

// 添加考核方式函数
void addfieldwindow::addfieldwindowAddField() {
    QString name = ui->textEdit->toPlainText();
    slot.direaddSlots(name);
}
