#ifndef BASICA_H
#define BASICA_H
#include "producto.h"

class Basica: public Producto
{
public:
    Basica(double codigo, QString nombre, double numeroUnidades, double costoUnitario);
    double Iva();
    double Subtotal();
    double Total();
};

#endif // BASICA_H


