#ifndef PLAN_H
#define PLAN_H
#include <string>
#include <iostream>
using namespace std;

class Plan
{
    public:
        int num_tel;
        string nom_cliente;
        string fecha;

        Plan(int num, int nom_cliente);

        double pagoMensual(int mins, int msgs);
        virtual void toString();

        int getNumero();
        string getNombre();
        string getFecha();


        virtual ~Plan();
    protected:
    private:
};

#endif // PLAN_H
