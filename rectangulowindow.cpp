#include "rectangulowindow.h"
#include "ui_rectangulowindow.h"

RectanguloWindow::RectanguloWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RectanguloWindow)
{
    ui->setupUi(this);
}

RectanguloWindow::~RectanguloWindow()
{
    delete ui;
}
