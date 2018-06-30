#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "app.h"

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
    void on_pushButtonRopeAdd_clicked();

private:
    Ui::MainWindow *ui;
    App *app;



};

#endif // MAINWINDOW_H
