#ifndef RECTANGULOWINDOW_H
#define RECTANGULOWINDOW_H

#include <QDialog>

namespace Ui {
class RectanguloWindow;
}

class RectanguloWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RectanguloWindow(QWidget *parent = 0);
    ~RectanguloWindow();

private:
    Ui::RectanguloWindow *ui;
};

#endif // RECTANGULOWINDOW_H
