#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../../Slots/header/Slots.h"
#include "../header/backupwindow.h"
#include "addwindow.h"
#include "delwindow.h"
#include "sortwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;


private slots:
    void MainWindowBackup();

    void MainWindowSearch();

    void MainWindowAdd();

    void MainWindowRefresh();

    void MainWindowDel();

    void MainWindowSort();

    void MainWindowSortShow();

    void MainWindowCalculate();

    void MainWindowRefreshBox();

    void MainWindowChangeItem(QTableWidgetItem * item);


private:
    Ui::MainWindow *ui;

    // 备份窗口
    backupwindow * bkw = new backupwindow(this);
    // 一级增加数据窗口
    addwindow * aw = new addwindow(this);
    // 一级删除数据窗口
    delwindow * dw = new delwindow(this);
    // 排序窗口
    sortwindow * sw = new sortwindow(this);





    Slots * slot = new Slots();


    // 更新表格函数
    void Refresh(QTableWidget * table, const Handle& handle);
};
#endif // MAINWINDOW_H
