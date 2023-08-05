//
// Created by Stark on 2023/6/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_sortwindow.h" resolved

#include "../header/sortwindow.h"
#include "../form/ui_sortwindow.h"


sortwindow::sortwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::sortwindow) {
    ui->setupUi(this);

    // 为comboBox添加下拉选项
    Handle handle;
    QStringList fieldname;
    for (int i = 0; i < handle.num_columns; ++i)
        fieldname.append(QString::fromStdString(handle.fieldname[i].name));

    // 删除前两个字段
    fieldname.pop_front();
    fieldname.pop_front();
    ui->comboBox_2->addItems(fieldname);


}

sortwindow::~sortwindow() {
    delete ui;
}

