//
// Created by Stark on 2023/6/29.
//

// You may need to build the project (run Qt uic code generator) to get "ui_addwindow.h" resolved

#include "../header/addwindow.h"
#include "../form/ui_addwindow.h"


addwindow::addwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::addwindow) {
    ui->setupUi(this);


}

addwindow::~addwindow() {
    delete ui;

    // 删除子窗口指针
    delete afw1;
    delete afw2;
}

void addwindow::addwindowForm() const {
    afw2->show();
}

void addwindow::addwindowField() const {
    afw1->show();
}
