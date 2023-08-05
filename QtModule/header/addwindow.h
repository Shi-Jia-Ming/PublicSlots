//
// Created by Stark on 2023/6/29.
//

#ifndef PUBLICSLOTS_ADDWINDOW_H
#define PUBLICSLOTS_ADDWINDOW_H

#include <QMainWindow>
#include "addfieldwindow.h"
#include "addformwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class addwindow; }
QT_END_NAMESPACE
    class addwindow : public QMainWindow {
Q_OBJECT

public:
    explicit addwindow(QWidget *parent = nullptr);

    ~addwindow() override;

    // 二级增加学生信息窗口
    addformwindow * afw2 = new addformwindow(this);
    // 二级增加考核方式窗口
    addfieldwindow * afw1 = new addfieldwindow(this);


    Ui::addwindow *ui;

public slots:
    void addwindowForm() const;

    void addwindowField() const;


};


#endif //PUBLICSLOTS_ADDWINDOW_H
