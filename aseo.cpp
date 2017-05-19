#include "aseo.h"

Aseo::Aseo(double codigo, QString nombre, double numeroUnidades, double costoUnitario):Producto(codigo, nombre, numeroUnidades, costoUnitario)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->numeroUnidades = numeroUnidades;
    this->costoUnitario = costoUnitario;
}

double Aseo::Subtotal(){
    double subtotalA = 0;
    subtotalA = numeroUnidades * costoUnitario;
    return subtotalA;

}

double Aseo::Iva(){
    double ivaA = 0;
    ivaA = Subtotal() * 0.05;
    return ivaA;

}

double Aseo::Total(){
    double totalA = 0;
    totalA = Subtotal() + Iva();
    return totalA;
}
