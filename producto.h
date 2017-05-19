#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <QString>

class Producto
{
protected:
    double codigo;
    QString nombre;
    double numeroUnidades;
    double costoUnitario;


public:
    Producto();
    Producto(double codigo, QString nombre, double numeroUnidades, double costoUnitario);

    double getCodigo();
    QString getNombre();
    double getNumeroUnidades();
    double getCostoUnitario();

    void setCodigo(double codigo);
    void setNombre(QString nombre);
    void setNumeroUnidades(double numeroUnidades);
    void setCostoUnitario(double costoUnitario);

    virtual double Iva() = 0;
    virtual double Subtotal() = 0;
    virtual double Total() = 0;
};

#endif // PRODUCTO_H
