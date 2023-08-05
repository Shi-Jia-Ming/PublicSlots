//
// Created by Stark on 2023/6/29.
//

// You may need to build the project (run Qt uic code generator) to get "ui_backupwindow.h" resolved

#include "../header/backupwindow.h"
#include "../form/ui_backupwindow.h"


backupwindow::backupwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::backupwindow) {
    ui->setupUi(this);
}

backupwindow::~backupwindow() {
    delete ui;
}
