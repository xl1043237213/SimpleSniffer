#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Simple Sniffer");
    w.setWindowIcon(QIcon(":/simplesniffer.ico"));
    w.show();
    return a.exec();
}
