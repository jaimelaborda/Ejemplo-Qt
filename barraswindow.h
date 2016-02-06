#ifndef RECTANGULOWINDOW_H
#define RECTANGULOWINDOW_H

#include <QDialog>

namespace Ui {
class BarrasWindow;
}

class BarrasWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BarrasWindow(QWidget *parent = 0);
    ~BarrasWindow();

private slots:
    void on_horizontalSlider_sliderMoved(int position);

    void on_dial_sliderMoved(int position);

    void on_dial_actionTriggered(int action);

    void on_dial_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::BarrasWindow *ui;
};

#endif // BARRASWINDOW_H
