#include "general.h"

General::General(double codigo, QString nombre, double numeroUnidades, double costoUnitario):Producto(codigo, nombre, numeroUnidades, costoUnitario)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->numeroUnidades = numeroUnidades;
    this->costoUnitario = costoUnitario;
}

double General::Subtotal(){
    double subtotalG = 0;
    subtotalG = numeroUnidades * costoUnitario;
    return subtotalG;
}

double General::Iva(){
    double ivaG = 0;
    ivaG = Subtotal() * 0.19;
    return ivaG;

}

double General::Total(){
    double totalG = 0;
    totalG = Subtotal() + Iva();
    return totalG;
}
