#ifndef MAINNRIRPG_H
#define MAINNRIRPG_H

#include <QMainWindow>

namespace Ui {
class mainNriRpg;
}

class mainNriRpg : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainNriRpg(QWidget *parent = nullptr);
    ~mainNriRpg();

private:
    Ui::mainNriRpg *ui;
};

#endif // MAINNRIRPG_H
