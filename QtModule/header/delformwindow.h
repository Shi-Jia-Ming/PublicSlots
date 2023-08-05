//
// Created by Stark on 2023/6/30.
//

#ifndef PUBLICSLOTS_DELFORMWINDOW_H
#define PUBLICSLOTS_DELFORMWINDOW_H

#include <QMainWindow>
#include "../../Slots/header/Slots.h"


QT_BEGIN_NAMESPACE
namespace Ui { class delformwindow; }
QT_END_NAMESPACE

class delformwindow : public QMainWindow {
Q_OBJECT

public:
    explicit delformwindow(QWidget *parent = nullptr);

    ~delformwindow() override;

    Ui::delformwindow *ui;

public slots:
    void delformwindowdelform();

private:
    Slots slot = Slots();

};


#endif //PUBLICSLOTS_DELFORMWINDOW_H
