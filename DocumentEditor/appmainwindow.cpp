//license-placeholder 2017-7-14 Tao Cheng
#include "appmainwindow.h"
#include "ui_appmainwindow.h"

AppMainWindow::AppMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AppMainWindow)
{
    ui->setupUi(this);
}

AppMainWindow::~AppMainWindow()
{
    delete ui;
}
