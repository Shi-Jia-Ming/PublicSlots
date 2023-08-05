#include "../header/mainwindow.h"
#include "../form/ui_mainwindow.h"
#include "../form/ui_backupwindow.h"
#include "../form/ui_addformwindow.h"
#include "../form/ui_addfieldwindow.h"
#include "../form/ui_delformwindow.h"
#include "../form/ui_delfieldwindow.h"
#include "../form/ui_sortwindow.h"
#include "../form/ui_addwindow.h"
#include "../form/ui_delwindow.h"
#include "../../DataBase/Manage/header/Modify.h"
#include <QTableWidgetItem>
#include <QStringList>
#include <list>
#include <string>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    std::list<std::string> query;
//    query.emplace_back("select * from student_information order by id");

    Handle handle = Handle("localhost", "root", "password", "students", 0, nullptr, 0, query);

    // 输入表中的内容
    MYSQL_ROW row = mysql_fetch_row(handle.res);
    ui->tableWidget->setColumnCount(int(handle.num_columns));
    for (int i = 0; i < handle.num_rows; ++i) {
        ui->tableWidget->insertRow(i);
        for (int j = 0; j < handle.num_columns; ++j) {
            ui->tableWidget->setItem(i, j,new QTableWidgetItem(row[j]));
        }
        row = mysql_fetch_row(handle.res);
    }

    // 输入表头内容
    QStringList fieldname;
    for (int i = 0; i < handle.num_columns; ++i)
        fieldname.append(handle.fieldname[i].name);
    ui->tableWidget->setHorizontalHeaderLabels(fieldname);

    // 在表中实现id不可更改
    int col= 0 ;
    for (int i = 0 ; i <ui->tableWidget->rowCount() ; i++)
    {
        QTableWidgetItem *item = ui->tableWidget->item(i, col);
        if(item) {
            item->setFlags(item->flags() & (~Qt::ItemIsEditable));
        } else {
            item = new QTableWidgetItem;
            item->setFlags(item->flags() & (~Qt::ItemIsEditable));
            ui->tableWidget->setItem(i, col, item);
        }
    }

    //  在查询的下拉框中添加所有字段
    ui->comboBox->addItems(fieldname);


    // 在计算的下拉框中添加成绩字段字段，需要先删除fieldname中的前两个字段
    fieldname.pop_front();
    fieldname.pop_front();
    ui->comboBox_2->addItems(fieldname);




    /* 主窗口按钮 */
    // 主窗口”备份“按钮连接一级子窗口backupwindow
    connect(ui->rbutton4, &QPushButton::clicked, this, &MainWindow::MainWindowBackup);
    // 主窗口”添加“按钮连接一级子窗口addwindow
    connect(ui->rbutton2, &QPushButton::clicked, this, &MainWindow::MainWindowAdd);
    // 主窗口”删除“按钮连接一级子窗口delwindow
    connect(ui->rbutton, &QPushButton::clicked, this, &MainWindow::MainWindowDel);
    // 主窗口”排序“按钮连接一级子窗口sortwindow
    connect(ui->rbutton3, &QPushButton::clicked, this, &MainWindow::MainWindowSort);
    // 主窗口”查询“按钮连接查询函数
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::MainWindowSearch);
    // 主窗口”计算“按钮连接计算函数
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::MainWindowCalculate);
    // 主窗口”退出“按钮连接主窗口mainwindow退出函数
    connect(ui->button1, &QPushButton::clicked, this, &QMainWindow::close);

    /* 一级子窗口按钮 */
    // addwindow窗口”添加学生信息“按钮连接二级子窗口addformwindow
    connect(aw->ui->pushButton_2, &QPushButton::clicked, aw, &addwindow::addwindowForm);
    // addwindow窗口”添加考核方式“按钮连接二级子窗口addfieldwindow
    connect(aw->ui->pushButton, &QPushButton::clicked, aw, &addwindow::addwindowField);
    // delwindow窗口”删除学生信息“按钮连接二级子窗口delformwindow
    connect(dw->ui->pushButton_2, &QPushButton::clicked, dw, &delwindow::delform);
    // delwindow窗口”删除考核方式“按钮连接二级子窗口delfieldwindow
    connect(dw->ui->pushButton, &QPushButton::clicked, dw, &delwindow::delwindowdelfield);
    // sortwindow窗口”排序“按钮连接1排序函数
    connect(sw->ui->pushButton, &QPushButton::clicked, this, &MainWindow::MainWindowSortShow);
    // sortwindow窗口”排序“按钮连接2一级子窗口子窗口sortwindow关闭函数
    connect(sw->ui->pushButton, &QPushButton::clicked, sw, &QMainWindow::close);
    // backupwindow窗口”备份数据“按钮连接备份函数
    connect(bkw->ui->pushButton, &QPushButton::clicked, slot, &Slots::backupSlots);
    // backupwindow窗口”恢复数据“按钮连接1恢复函数
    connect(bkw->ui->pushButton_2, &QPushButton::clicked, slot, &Slots::restoreSlots);
    // backupwindow窗口”恢复数据“按钮连接2更新主窗口表格
    connect(bkw->ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::MainWindowRefresh);
    // backupwindow窗口”恢复数据“按钮连接3一级子窗口backupwindow关闭函数
    connect(bkw->ui->pushButton_2, &QPushButton::clicked, bkw, &QMainWindow::close);



    /* 二级子窗口按钮 */
    // addformwindow窗口”确定“按钮连接1对数据库进行操作
    connect(aw->afw2->ui->pushButton_2, &QPushButton::clicked, aw->afw2, &addformwindow::addformwindowAddForm);
    // addformwindow窗口”确定“按钮连接2二级子窗口addformwindow关闭函数
    connect(aw->afw2->ui->pushButton_2, &QPushButton::clicked, aw->afw2, &QMainWindow::close);
    // addformwindow窗口”确定“按钮连接3更新主窗口表格
    connect(aw->afw2->ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::MainWindowRefresh);
    // addformwindow窗口”取消“按钮连接二级子窗口addformwindow关闭函数
    connect(aw->afw2->ui->pushButton, &QPushButton::clicked, aw->afw2, &QMainWindow::close);
    // addfieldwindow窗口”确定“按钮连接1对数据库进行操作
    connect(aw->afw1->ui->pushButton_2, &QPushButton::clicked, aw->afw1, &addfieldwindow::addfieldwindowAddField);
    // addfieldwindow窗口”确定“按钮连接2二级子窗口addfieldwindow关闭函数
    connect(aw->afw1->ui->pushButton_2, &QPushButton::clicked, aw->afw1, &QMainWindow::close);
    // addfieldwindow窗口”确定“按钮连接3更新主窗口表格
    connect(aw->afw1->ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::MainWindowRefresh);
    // addfieldwindow窗口“确定”按钮连接4更新下拉框
    connect(aw->afw1->ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::MainWindowRefreshBox);
    // addfieldwindow窗口“取消”按钮连接二级子窗口addfieldwindow关闭函数
    connect(aw->afw1->ui->pushButton, &QPushButton::clicked, aw->afw1, &QMainWindow::close);
    // delformwindow窗口”确定“按钮连接1对数据库进行操作
    connect(dw->dfw2->ui->pushButton_2, &QPushButton::clicked, dw->dfw2, &delformwindow::delformwindowdelform);
    // delformwindow窗口”确定“按钮连接2二级子窗口delformwindow关闭函数
    connect(dw->dfw2->ui->pushButton_2, &QPushButton::clicked, dw->dfw2, &QMainWindow::close);
    // delformwindow窗口”确定“按钮连接3更新主窗口表格
    connect(dw->dfw2->ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::MainWindowRefresh);
    // delformwindow窗口”取消“按钮连接二级子窗口delformwindow关闭函数
    connect(dw->dfw2->ui->pushButton, &QPushButton::clicked, dw->dfw2, &QMainWindow::close);
    // delfieldwindow窗口”确定“按钮连接1对数据库进行操作
    connect(dw->dfw1->ui->pushButton_2, &QPushButton::clicked, dw->dfw1, &delfieldwindow::delfield);
    // delfieldwindow窗口”确定“按钮连接2二级子窗口delfieldwindow关闭函数
    connect(dw->dfw1->ui->pushButton_2, &QPushButton::clicked, dw->dfw1, &QMainWindow::close);
    // delfieldwindow窗口”确定“按钮连接3更新主窗口表格
    connect(dw->dfw1->ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::MainWindowRefresh);
    // delfieldwindow窗口“确定”按钮连接4更新下拉框
    connect(dw->dfw1->ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::MainWindowRefreshBox);
    // delfieldwindow窗口”取消“按钮连接二级子窗口delfieldwindow关闭函数
    connect(dw->dfw1->ui->pushButton, &QPushButton::clicked, dw->dfw1, &QMainWindow::close);



    /* 表格修改 */
    // 学生数据表格与数据库的连接
//    connect(ui->tableWidget, &QTableWidget::itemChanged, this->slot, &Slots::modifyFormSlots);
    connect(ui->tableWidget, &QTableWidget::itemChanged, this, &MainWindow::MainWindowChangeItem);
    // 查询界面表格与数据库的连接
    connect(ui->tableWidget_2, &QTableWidget::itemChanged, this, &MainWindow::MainWindowChangeItem);
    // 查询界面表格连接主窗口表格刷新
    connect(ui->tableWidget_2, &QTableWidget::itemChanged, this, &MainWindow::MainWindowRefresh);

}

MainWindow::~MainWindow() {
    // 删除ui指针
    delete ui;

    // 删除子窗口指针
    delete bkw;
    delete aw;
    delete dw;
    delete sw;
    // 删除接口指针
    delete slot;
}

// 主窗口打开backupwindow函数
void MainWindow::MainWindowBackup() {
    bkw->show();
}

// 主窗口打开addwindow函数
void MainWindow::MainWindowAdd() {
    aw->show();
}

// 主窗口表格更新函数
void  MainWindow::MainWindowRefresh() {
    Handle handle;
    this->Refresh(ui->tableWidget, handle);
}

// 主窗口下拉框更新函数
void MainWindow::MainWindowRefreshBox() {
    ui->comboBox->clear();
    ui->comboBox_2->clear();
    this->sw->ui->comboBox_2->clear();
    Handle handle;
    QStringList fieldname;
    for (int i = 0; i < handle.num_columns; ++i)
        fieldname.append(handle.fieldname[i].name);
    // 在查询的下拉框中添加所有字段
    ui->comboBox->addItems(fieldname);

    // 在计算的下拉框中添加成绩字段字段，需要先删除fieldname中的前两个字段
    fieldname.pop_front();
    fieldname.pop_front();
    ui->comboBox_2->addItems(fieldname);

    // 排序窗口下拉框字段更新
    // 删除前两个字段
    this->sw->ui->comboBox_2->addItems(fieldname);
}

// 主窗口搜索函数
void MainWindow::MainWindowSearch() {
    QString value = ui->lineEdit_2->text();
    QString field = ui->comboBox->currentText();
    auto * handle = new Handle();
    slot->screenSlots(field, value, handle);

    // 更新表格数据
    Refresh(ui->tableWidget_2, *handle);

    delete handle;

}

// 主窗口表格填充函数
void MainWindow::Refresh(QTableWidget * table, const Handle& handle) {

    // 断开修改学生信息的连接
    disconnect(ui->tableWidget, &QTableWidget::itemChanged, this, &MainWindow::MainWindowChangeItem);
    disconnect(ui->tableWidget_2, &QTableWidget::itemChanged, this, &MainWindow::MainWindowChangeItem);
    // 删除所有行
    while (table->rowCount() > 0) {
        table->removeRow(0);
    }
    // 输入表中的内容
    MYSQL_ROW row = mysql_fetch_row(handle.res);
    // 确定表格的列数
    table->setColumnCount(int(handle.num_columns));
    for (int i = 0; i < handle.num_rows; ++i) {
        //  判断row是否为null
        if (row) {
            table->insertRow(i);
            for (int j = 0; j < handle.num_columns; ++j)
                table->setItem(i, j, new QTableWidgetItem(row[j]));
            row = mysql_fetch_row(handle.res);
        } else ;
    }

    // 输入表头内容
    QStringList fieldname;
    for (int i = 0; i < handle.num_columns; ++i)
        fieldname.append(handle.fieldname[i].name);
    table->setHorizontalHeaderLabels(fieldname);

    // 重新设置某列的内容为只读
    int col= 0 ;
    for (int i = 0 ; i < table->rowCount() ; i++)
    {
        QTableWidgetItem *item = table->item(i, col);
        if(item) {
            item->setFlags(item->flags() & (~Qt::ItemIsEditable));
        } else {
            item = new QTableWidgetItem;
            item->setFlags(item->flags() & (~Qt::ItemIsEditable));
            table->setItem(i, col, item);
        }
    }

    // 重新连接学生信息修改
    connect(ui->tableWidget, &QTableWidget::itemChanged, this, &MainWindow::MainWindowChangeItem);
    connect(ui->tableWidget_2, &QTableWidget::itemChanged, this, &MainWindow::MainWindowChangeItem);

}

// 主窗口打开delwindow函数
void MainWindow::MainWindowDel() {
    dw->show();
}

// 主窗口打开sortwindow函数
void MainWindow::MainWindowSort() {
    sw->show();
}

// 主窗口排序函数
void MainWindow::MainWindowSortShow() {
    QString field = sw->ui->comboBox_2->currentText();
    int order = sw->ui->comboBox->currentIndex();

    auto * handle = new Handle();

    slot->sortSlots(field, order, handle);
    Refresh(ui->tableWidget, *handle);

    delete handle;
}

// 主窗口计算函数
void MainWindow::MainWindowCalculate() {
    QString field = ui->comboBox_2->currentText();
    std::list<std::string> query;
    Calculate calculate("localhost", "root", "password", "students", 0, nullptr, 0, query);
    slot->calculateSlots(field, calculate);
    ui->label4->setText(QString::fromStdString(calculate.average));
}

// 主窗口更改学生信息函数
void MainWindow::MainWindowChangeItem(QTableWidgetItem *item) {

    QString id = ui->tableWidget->model()->index(item->row(), 0).data().toString();
    slot->modifyFormSlots(id, item);

}




