#include "Tigo.h"
#include <iostream>
#include <string>
#include <vector>


Tigo::Tigo()
{
    //ctor
}

Tigo::~Tigo()
{
    //dtor
}


void Tigo::addPlan(int num_tel, string nom_cliente, string tipo)
{
      string dos="Blackberry";

        if(tipo==dos)
        {
            cout<<"Ingrese el PIN: "<<endl;
            string pin;
            cin>>pin;
            planes.push_back(new PlanBlackberry(num_tel, nom_cliente, pin));
        }

        if(tipo=="iPhone")
        {
            cout<<"Ingrese el email: "<<endl;
            string email;
            cin>>email;
            planes.push_back(new PlanIphone(numero, nombre, email);
        }

}


  /*  public boolean busqueda(int num, String datoExtra,String tipo, int cont){
     if (cont < planes.size()){
          if(planes.get(cont).getNumero()==num){
                return true;
          }
          else if (planes.get(cont) instanceof PlanIphone){
                if (((PlanIphone)(planes.get(cont))).getEmail().equalsIgnoreCase(datoExtra)){
                   return true;
                 }
          }
          else if  (planes.get(cont) instanceof PlanBlackberry){
               if ( ((PlanBlackberry)(planes.get(cont))).getPin().equalsIgnoreCase(datoExtra)){
                   return true;
                }
           }
          else{
              return  busqueda(num, datoExtra,tipo, cont+1);
          }
      }
      return false;
    }*/


double Tigo::pagoPlan(int num, int mins, int msgs)
    {
      for(int i=0;i<planes.size();i++)
       {
           if(planes[i].getNumero())
              return planes[i]->pagoMensual(mins,msgs))
        }
        return 0;
    }

 void Tigo::addAmigo(int num, string pin){
        for(int x=0;x<planes.size();i++)
        {
          if(planes[i]->getNumero==num)
            planes[i].addAmigo(pin);
            else
                cout<<"No existe ese numero"<<endl;
        }
}

void Tigo:: imprimir()
    {
       for(int x=0;x<planes.size();x++)
       {
        planes[i].toString();
       }
    }
