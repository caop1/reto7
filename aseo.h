#ifndef ASEO_H
#define ASEO_H
#include "producto.h"

class Aseo: public Producto
{
public:
    Aseo(double codigo, QString nombre, double numeroUnidades, double costoUnitario);
    double Iva();
    double Subtotal();
    double Total();
};

#endif // ASEO_H

