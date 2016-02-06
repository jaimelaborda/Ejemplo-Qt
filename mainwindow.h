#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "barraswindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButtonArea_clicked();

    void on_pushButtonExit_clicked();

private:
    Ui::MainWindow *ui;
    //RectanguloWindow *newwindows;     //Creamos la clase de la nueva ventana
};

#endif // MAINWINDOW_H
