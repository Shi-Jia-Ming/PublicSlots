//
// Created by Stark on 2023/6/29.
//

#ifndef PUBLICSLOTS_ADDFORMWINDOW_H
#define PUBLICSLOTS_ADDFORMWINDOW_H

#include <QMainWindow>
#include "../../Slots/header/Slots.h"


QT_BEGIN_NAMESPACE
namespace Ui { class addformwindow; }
QT_END_NAMESPACE

class addformwindow : public QMainWindow {
Q_OBJECT

public:
    explicit addformwindow(QWidget *parent = nullptr);

    ~addformwindow() override;

    Ui::addformwindow *ui;


public slots:
    void addformwindowAddForm();

private:
    // 与数据库操作的接口
    Slots slot = Slots();
};


#endif //PUBLICSLOTS_ADDFORMWINDOW_H
