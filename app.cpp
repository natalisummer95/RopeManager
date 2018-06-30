#include "app.h"
#include <QDebug>

App::App()
{
    qDebug() << "app init";

    settings = new QSettings("Settings.ini", QSettings::IniFormat);

    settings->setValue("Hello","World");
}
