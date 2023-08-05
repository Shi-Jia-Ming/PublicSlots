//
// Created by Stark on 2023/6/30.
//

#ifndef PUBLICSLOTS_DELFIELDWINDOW_H
#define PUBLICSLOTS_DELFIELDWINDOW_H

#include <QMainWindow>
#include "../../Slots/header/Slots.h"


QT_BEGIN_NAMESPACE
namespace Ui { class delfieldwindow; }
QT_END_NAMESPACE

class delfieldwindow : public QMainWindow {
Q_OBJECT

public:
    explicit delfieldwindow(QWidget *parent = nullptr);

    ~delfieldwindow() override;

    Ui::delfieldwindow *ui;


public slots:
    void delfield();

private:

    Slots slot = Slots();

};


#endif //PUBLICSLOTS_DELFIELDWINDOW_H
