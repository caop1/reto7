#include "basica.h"

Basica::Basica(double codigo, QString nombre, double numeroUnidades, double costoUnitario):Producto(codigo, nombre, numeroUnidades, costoUnitario)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->numeroUnidades = numeroUnidades;
    this->costoUnitario = costoUnitario;
}

double Basica::Subtotal(){
    double subtotalB = 0;
    subtotalB = numeroUnidades * costoUnitario;
    return subtotalB;

}

double Basica::Iva(){
    double ivaB = 0;
    ivaB = Subtotal() * 0.01;
    return ivaB;

}

double Basica::Total(){
    double totalB = 0;
    totalB = Subtotal() + Iva();
    return totalB;
}
