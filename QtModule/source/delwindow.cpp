//
// Created by Stark on 2023/6/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_delwindow.h" resolved

#include "../header/delwindow.h"
#include "../form/ui_delwindow.h"
#include "../form/ui_delfieldwindow.h"
#include "../form/ui_delformwindow.h"


delwindow::delwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::delwindow) {
    ui->setupUi(this);

}

delwindow::~delwindow() {
    delete ui;

    // 删除子窗口指针
    delete dfw1;
    delete dfw2;
}

// 一级子窗口打开二级子窗口
void delwindow::delform() const {
    dfw2->show();
}

// 一级子窗口打开二级子窗口
void delwindow::delwindowdelfield() const {
    dfw1->show();
}
