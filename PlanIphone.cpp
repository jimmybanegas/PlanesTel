#include "PlanIphone.h"

PlanIphone::PlanIphone(int num_tel, string nom_cliente, string email)
{
    this->num_tel=num_tel;
    this->nom_cliente=nom_cliente;
    this->email=email;

    //ctor
}

PlanIphone::~PlanIphone()
{
    //dtor
}

double PlanIphone::pagoMensual(int mins, int msgs)
{
    double total=(22)+(mins*20)+(msgs*5)
    return total;
}


void PlanIphone::toString()
{
   cout<<"Numero de telefono: "<<num_tel<<end;
   cout<<"Nombre del cliente: "<<nom_cliente<<endl:
   cout<<"Numero de telefono:"<<fecha<<end;
   cout<<"Correo electronico:"<<email<<end;
}
