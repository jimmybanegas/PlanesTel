#include "include\Plan.h"

Plan::Plan(int num_tel, int nom_cliente)
{
   this->num_tel=num_tel;
   this->nom_cliente=nom_cliente;
   this->fecha="29 de octubre";
    //ctor
}

Plan::~Plan()
{
    //dtor
}


int Plan:getNumero()
{
   return num_tel;
}

string Plan:getNombre()
{
   return nom_cliente;
}

int Plan:getFecha()
{
   return fecha;
}




