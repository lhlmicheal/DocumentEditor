//license-placeholder 2017-7-14 Tao Cheng
#include "appmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AppMainWindow w;
    w.show();

    return a.exec();
}
