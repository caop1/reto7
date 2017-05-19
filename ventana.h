#ifndef VENTANA_H
#define VENTANA_H

#include <QMainWindow>
#include "producto.h"
#include "basica.h"
#include "general.h"
#include "aseo.h"
#include <vector>

using std::vector;

namespace Ui {
class ventana;
}

class ventana : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventana(QWidget *parent = 0);
    ~ventana();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ventana *ui;
    vector<General*> listaGeneral;
    vector<Aseo*> listaAseo;
    vector<Basica*> listaBasica;
};

#endif // VENTANA_H
