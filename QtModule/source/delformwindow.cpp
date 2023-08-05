//
// Created by Stark on 2023/6/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_delformwindow.h" resolved

#include "../header/delformwindow.h"
#include "../form/ui_delformwindow.h"


delformwindow::delformwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::delformwindow) {
    ui->setupUi(this);

}

delformwindow::~delformwindow() {
    delete ui;
}

void delformwindow::delformwindowdelform() {
    QString type = ui->comboBox->currentText();
    QString content = ui->textEdit->toPlainText();
    slot.transpopSlots(content, type);
}
