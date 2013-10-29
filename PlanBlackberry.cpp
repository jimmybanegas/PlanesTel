#include "PlanBlackberry.h"

PlanBlackberry::PlanBlackberry(int num_tel, string nom_cliente, string pin)
{
    this->num_tel=num_tel;
    this->nom_cliente=nom_cliente;
    this->pin=pin;
    //ctor
}

PlanBlackberry::~PlanBlackberry()
{
    //dtor
}

double PlanBlackberry::pagoMensual(int mins, int msgs)
{
    double total;
    double mins=0;
    double msgs=0;

    if(mins>200)
      mins=(mins-200)*15;


    if(msgs>300)
      msgs=(mins-300)*8;


    tota=40+mins+msgs;

    return total;
}

void PlanBlackberry::toString()
{
   cout<<"Numero de telefono: "<<num_tel<<end;
   cout<<"Nombre del cliente: "<<nom_cliente<<endl:
   cout<<"Numero de telefono:"<<fecha<<end;
   cout<<"Blackberry PIN: "<<pin<<end;
}


void PlanBlackberry::addPinAmigo(string pin)
{
    this->pines.push_back(pin);
}
