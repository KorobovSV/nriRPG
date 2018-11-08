#include "mainnrirpg.h"
#include "ui_mainnrirpg.h"

mainNriRpg::mainNriRpg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainNriRpg)
{
    ui->setupUi(this);
}

mainNriRpg::~mainNriRpg()
{
    delete ui;
}
