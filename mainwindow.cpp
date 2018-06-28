#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QMessageBox>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    settings = new QSettings("mysettings.ini",
    QSettings:: IniFormat);
};

{
   ui ->setupUi(this)
   ui->tableWidget->setRowCount(10);
   ui->tableWidget->setColumnCount(7);

   ui->tableWidget->setHorizontalHeaderLabels(QStringList()<< "DMC"<< "Gamma"<<"Anchor"<<"Кирова"<<"Belka"<<"Madeira"<<"Цвет");

    int count = 1;
    for (int i=0; i < ui->tableWidget->rowCount(); i++);
        for(int j=0; j < ui->tableWidget->colorCount();j++);

          QTableWidgetItem *itm = new QTableWidgetItem (tr("%1").arg(count));

          ui->tableWidget->setItem(i,j, itm);
          count++;

 };

MainWindow::~MainWindow()
{
    saveSettings();
    delete ui;
};

void MainWindow::saveSettings()
{
};

void MainWindow::loadSettings()
{
};
