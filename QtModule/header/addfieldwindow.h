//
// Created by Stark on 2023/6/29.
//

#ifndef PUBLICSLOTS_ADDFIELDWINDOW_H
#define PUBLICSLOTS_ADDFIELDWINDOW_H

#include <QMainWindow>
#include "../../Slots/header/Slots.h"


QT_BEGIN_NAMESPACE
namespace Ui { class addfieldwindow; }
QT_END_NAMESPACE

class addfieldwindow : public QMainWindow {
Q_OBJECT

public:
    explicit addfieldwindow(QWidget *parent = nullptr);

    ~addfieldwindow() override;

    Ui::addfieldwindow *ui;

public slots:
    void addfieldwindowAddField();

private:
    Slots slot = Slots();
};


#endif //PUBLICSLOTS_ADDFIELDWINDOW_H
