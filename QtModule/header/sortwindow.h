//
// Created by Stark on 2023/6/30.
//

#ifndef PUBLICSLOTS_SORTWINDOW_H
#define PUBLICSLOTS_SORTWINDOW_H

#include <QMainWindow>
#include "../../Slots/header/Slots.h"


QT_BEGIN_NAMESPACE
namespace Ui { class sortwindow; }
QT_END_NAMESPACE

class sortwindow : public QMainWindow {
Q_OBJECT

public:
    explicit sortwindow(QWidget *parent = nullptr);

    ~sortwindow() override;

    Ui::sortwindow *ui;


private:

    Slots slot = Slots();

};


#endif //PUBLICSLOTS_SORTWINDOW_H
