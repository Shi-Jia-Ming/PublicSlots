#include <QApplication>
#include <QPushButton>
#include "QtModule/header/mainwindow.h"

int main(int argc, char *argv[]) {
    // 输出结果设置为 utf8
    system("chcp 65001");
    QApplication a(argc, argv);
//    QPushButton button("Hello world!", nullptr);
//    button.resize(200, 100);
//    button.show();
    MainWindow window = MainWindow(nullptr);
    window.show();

    return QApplication::exec();
}
