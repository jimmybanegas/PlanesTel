#include <iostream>
#include <string>
#include <vector>
#include "Plan.h"
#include "PlanIphone.h"
#include "PlanBlackberry.h"
#include "Tigo.h"

using namespace std;



int main()
{
    Tigo p;
    int resp=0;

    do{
            cout<<"Menu de opciones "<<endl;
            cout<<"1- Agregar Plan"<<endl;
            cout<<"2- Buscar"<<endl;
            cout<<"3- Pagar"<<endl;
            cout<<"4- Agregar amigo"<<endl;
            cout<<"5- Imprimir planes"<<endl;
            cin>>resp;

            switch (resp){
                case 1:
                  {
                    cout<<"Agregar un nuevo plan: "<<endl;
                    cout<<"Ingrese numero: "<<endl;
                    int num;
                    cin>>num;
                    cout<<"Ingrese nombre: "<<endl;
                    string nombre;
                    cin>>nombre;
                    cout<<"Ingrese tipo: "<<endl;
                    string tipo;
                    cin>>tipo;

                    p.addPlan(num, nombre, tipo);
                  }

                   break;

              case 2:
                  {
                    cout<<"Buscar: "<<endl;
                    cout<<"Ingrese numero: "<<endl;
                    int num;
                    cin>>num;
                    cout<<"Ingrese PIN o email: "<<endl;
                    string extra;
                    cin>>extra;
                    cout<<"Ingrese tipo: "<<endl;
                    string tipo;
                    cin>>tipo;

                   /* if(p.busqueda(n, extra,ti,0)){
                        cout<<"Existe"<<enld;
                    }
                    else{
                    cout"No existe"<<endl;
                    }*/
                  }
                 break;

                case 3:
                {
                    cout<<"Pagar plan: "<<endl;
                    cout<<"Ingrese numero: "<<endl;
                    int num;
                    cin>>num;
                    cout<<"Ingrese minutos: "<<endl;
                    int mins;
                    cin>>mins;
                    cout<<"Ingrese cantidad de mensajes: "<<endl;
                    int msgs;
                    cin>>msgs;

                    cout<<"Total a pagar: "<<p.pagoPlan(num, mins, msgs)<<endl;
                }
                    break;

                case 4:
                {
                    cout<<"Agregar amigo: "<<endl;
                    cout<<"Ingrese numero de telefono: "<<endl;
                    int num;
                    cin>>num;
                    cout<<"Ingrese pin de su amigo: "<<endl;
                    string pin;
                    cin>>pin;

                    p.addAmigo(num, pin);
                }
                    break;

                case 5:
                   {
                       p.imprimir();
                   }
                    break;


            }

        }while (resp>0 && resp<6);

    return 0;
}




