#include "mainnrirpg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainNriRpg w;
    w.show();

    return a.exec();
}
