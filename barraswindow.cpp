#include "barraswindow.h"
#include "ui_barraswindow.h"

BarrasWindow::BarrasWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BarrasWindow)
{
    ui->setupUi(this);
}

BarrasWindow::~BarrasWindow()
{
    delete ui;
}

void BarrasWindow::on_horizontalSlider_sliderMoved(int position)
{
    ui->progressBar->setValue(position);
}

void BarrasWindow::on_dial_sliderMoved(int position)
{
    ui->lcdNumber->display(position);
}
