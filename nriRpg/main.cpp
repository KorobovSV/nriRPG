#include "mainnrirpg.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainNriRpg w;
    w.show();
    qDebug()<<"hello debug";
    return a.exec();
}
