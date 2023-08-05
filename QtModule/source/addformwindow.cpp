//
// Created by Stark on 2023/6/29.
//

// You may need to build the project (run Qt uic code generator) to get "ui_addformwindow.h" resolved

#include "../header/addformwindow.h"
#include "../form/ui_addformwindow.h"



addformwindow::addformwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::addformwindow) {
    ui->setupUi(this);

    // 显示id
    Handle handle;
    ui->textBrowser_3->setPlainText(QString::number(handle.num_rows + 1));

}

addformwindow::~addformwindow() {
    delete ui;
}

// 增加学生信息函数
void addformwindow::addformwindowAddForm() {
    // 获取当前表格的行数
    Handle handle;
    QString id = QString::number(handle.num_rows + 1);
    QString name = ui->textEdit->toPlainText();
    // 设置要添加的id
    ui->textBrowser_3->setPlainText(id);
    // 设置ScoreType
    ScoreType scores;
    for (int i = 0; i < handle.num_columns - 2; ++i) {
        scores.add(std::to_string(i), 0);
    }
    // 对数据库进行操作
    slot.transaddSlots(name, id, scores);

}
