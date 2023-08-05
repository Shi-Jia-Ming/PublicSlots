//
// Created by Stark on 2023/6/30.
//

#ifndef PUBLICSLOTS_DELWINDOW_H
#define PUBLICSLOTS_DELWINDOW_H

#include <QMainWindow>
#include "delfieldwindow.h"
#include "delformwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class delwindow; }
QT_END_NAMESPACE

class delwindow : public QMainWindow {
Q_OBJECT

public:
    explicit delwindow(QWidget *parent = nullptr);

    ~delwindow() override;

    // 删除考核方式对象
    delfieldwindow * dfw1 = new delfieldwindow(this);
    // 删除学生信息对象
    delformwindow * dfw2 = new delformwindow(this);

    Ui::delwindow *ui;

public slots:
    void delform() const;

    void delwindowdelfield() const;

};


#endif //PUBLICSLOTS_DELWINDOW_H
