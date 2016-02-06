#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "barraswindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui -> label -> setText ("Hola Mundo");
}

void MainWindow::on_pushButton_2_clicked()
{
    QFont font = ui -> label->font();
    font.setPointSize(30);
    ui -> label->setFont(font);
}

void MainWindow::on_pushButton_3_clicked()
{
    QFont font = ui -> label->font();
    font.setBold(true);
    ui -> label->setFont(font);
}

void MainWindow::on_pushButton_4_clicked()
{
    QFont font = ui -> label->font();
    font.setFamily("Comic Sans MS");
    ui -> label->setFont(font);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString mensaje;
    mensaje = ui->lineEdit->text();
    ui->label->setText(mensaje);
}

void MainWindow::on_pushButton_6_clicked()
{
    //MODE APROACH -> No deja ir a mainWindows hasta que no cerremos(Dialogo)
    BarrasWindow newwindow;      //Creamos el objeto de la nueva windows
    newwindow.setModal(true);       //Set Modal Mode
    newwindow.exec();               //Ejecuta y muestra

    //MODELESS APROACH -> Deja ir a mainWindoes y tener ambas abiertas
    //newwindows = new RectanguloWindow(this);    //Creamos el objeto de la clase declarada en mainWindows.h
    //newwindows->show();                         //Llamos a Show()

}

void MainWindow::on_pushButtonArea_clicked()
{
    //Leemos los edit del usuario
    QString base = ui->lineEditBase->text();
    float fBase;
            fBase = base.toFloat();
    QString altura = ui->lineEditAltura->text();
    float fAltura;
            fAltura = altura.toFloat();
    //Calculamos el area

    float area = fBase*fAltura;
    //pasamos area a QString para poder mostrarla
    QString sArea = QString::number(area, 'f', 2);

    //La mostramos
    ui->labelArea->setText(sArea);
}

void MainWindow::on_pushButtonExit_clicked()
{
    this->close();      //Cierra la ventana donde actualmente estás
}
