#include "producto.h"

Producto::Producto()
{
    this->codigo = 0;
    this->nombre = "";
    this->numeroUnidades = 0;
    this->costoUnitario = 0.0;
}

Producto::Producto(double codigo, QString nombre, double numeroUnidades, double costoUnitario){

    this->codigo = codigo;
    this->nombre = nombre;
    this->numeroUnidades = numeroUnidades;
    this->costoUnitario = costoUnitario;
}

    double Producto::getCodigo(){
        return codigo;
    }
    QString Producto::getNombre(){
        return nombre;
    }
    double Producto::getNumeroUnidades(){
        return numeroUnidades;
    }
    double Producto::getCostoUnitario(){
        return costoUnitario;
    }

    void Producto::setCodigo(double codigo){
        this->codigo = codigo;
    }
    void Producto::setNombre( QString nombre){
        this->nombre = nombre;
    }
    void Producto::setNumeroUnidades(double numeroUnidades){
        this->numeroUnidades = numeroUnidades;
    }
    void Producto::setCostoUnitario(double costoUnitario){
        this->costoUnitario = costoUnitario;
    }
