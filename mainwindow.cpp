#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    app = new App;
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButtonRopeAdd_clicked() {
    /*TODO:
     * 1) получить значния из lineedit
     * 2) сделать public функцию в App для сохранения веревочки
     * 3) вызвать эту функцию при нажитии на кнопочку (передаем туда текст из lineedit)
     * 4) в функции по аналогии сохранить значения (погугл про группы в QSettings)
     * 5) при каждом запуске программы считывай сохраненные значения и выводи в qDebugом в консоль
     * */
}
