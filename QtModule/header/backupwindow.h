//
// Created by Stark on 2023/6/29.
//

#ifndef PUBLICSLOTS_BACKUPWINDOW_H
#define PUBLICSLOTS_BACKUPWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class backupwindow; }
QT_END_NAMESPACE

class backupwindow : public QMainWindow {
Q_OBJECT

public:
    explicit backupwindow(QWidget *parent = nullptr);

    ~backupwindow() override;

    Ui::backupwindow *ui;

};


#endif //PUBLICSLOTS_BACKUPWINDOW_H
