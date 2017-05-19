#ifndef GENERAL_H
#define GENERAL_H
#include "producto.h"

class General: public Producto
{
public:
    General(double codigo, QString nombre, double numeroUnidades, double costoUnitario);
    double Iva();
    double Subtotal();
    double Total();
};

#endif // GENERAL_H
