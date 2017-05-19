#include "ventana.h"
#include "ui_ventana.h"

ventana::ventana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventana)
{
    ui->setupUi(this);
}

ventana::~ventana()
{
    delete ui;
}
void ventana::on_pushButton_clicked()
{
    double codigo = ui->objCodigo->text().toDouble();
    QString nombre = ui->objNombre->text();
    double numeroUnidades = ui->objNumero->text().toDouble();
    double costoUnitario = ui->objCosto->text().toDouble();

    QString objCategoria = ui->objCategoria->currentText();

    if(objCategoria == "General"){

        General * objGeneral = new  General(codigo, nombre, numeroUnidades, costoUnitario);

        listaGeneral.push_back(objGeneral);
         ui->objCodigo->setText("");
         ui->objNombre->setText("");
         ui->objNumero->setText("");
         ui->objCosto->setText("");

    }

    if(objCategoria == "Basica"){


    Basica * objBasica = new  Basica(codigo, nombre, numeroUnidades, costoUnitario);

    listaBasica.push_back(objBasica);
     ui->objCodigo->setText("");
     ui->objNombre->setText("");
     ui->objNumero->setText("");
     ui->objCosto->setText("");

    }

    if(objCategoria == "Aseo"){

    Aseo * objAseo = new  Aseo(codigo, nombre, numeroUnidades, costoUnitario);

    listaAseo.push_back(objAseo);
     ui->objCodigo->setText("");
     ui->objNombre->setText("");
     ui->objNumero->setText("");
     ui->objCosto->setText("");

    }
}


void ventana::on_pushButton_2_clicked()
{
    QString salida = "Codigo\tNombre\tNumeroUnidades\tCostoUnitario\tSubtotal\tIva\tTotal\n\n";
    for(int i=0; i<(int)listaGeneral.size(); i++){
        salida+=QString::number(listaGeneral[i]->getCodigo());
        salida+="\t";
        salida+=listaGeneral[i]->getNombre();
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->getNumeroUnidades());
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->getCostoUnitario());
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->Subtotal());
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->Iva());
        salida+="\t";
        salida+=QString::number(listaGeneral[i]->Total());
        salida+="\n";
    }

    for(int i=0; i<(int)listaAseo.size(); i++){
        salida+=QString::number(listaAseo[i]->getCodigo());
        salida+="\t";
        salida+=listaAseo[i]->getNombre();
        salida+="\t";
        salida+=QString::number(listaAseo[i]->getNumeroUnidades());
        salida+="\t";
        salida+=QString::number(listaAseo[i]->getCostoUnitario());
        salida+="\t";
        salida+=QString::number(listaAseo[i]->Subtotal());
        salida+="\t";
        salida+=QString::number(listaAseo[i]->Iva());
        salida+="\t";
        salida+=QString::number(listaAseo[i]->Total());
        salida+="\n";
    }

     for(int i=0; i<(int)listaBasica.size(); i++){
        salida+=QString::number(listaBasica[i]->getCodigo());
        salida+="\t";
        salida+=listaBasica[i]->getNombre();
        salida+="\t";
        salida+=QString::number(listaBasica[i]->getNumeroUnidades());
        salida+="\t";
        salida+=QString::number(listaBasica[i]->getCostoUnitario());
        salida+="\t";
        salida+=QString::number(listaBasica[i]->Subtotal());
        salida+="\t";
        salida+=QString::number(listaBasica[i]->Iva());
        salida+="\t";
        salida+=QString::number(listaBasica[i]->Total());
        salida+="\n";

    }


     ui->objSalida->setText(salida);
}
