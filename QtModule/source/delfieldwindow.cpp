//
// Created by Stark on 2023/6/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_delfieldwindow.h" resolved

#include "../header/delfieldwindow.h"
#include "../form/ui_delfieldwindow.h"


delfieldwindow::delfieldwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::delfieldwindow) {
    ui->setupUi(this);

}

delfieldwindow::~delfieldwindow() {
    delete ui;
}

// 删除考核方式函数
void delfieldwindow::delfield() {
    QString field = ui->textEdit->toPlainText();
    slot.direpopSlots(field);
}
