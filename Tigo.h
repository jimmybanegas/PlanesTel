#ifndef TIGO_H
#define TIGO_H
#include <string>
#include <iostream>
#include <vector>
#include "Plan.h"

class Tigo
{
    public:
        vector<Plan*> planes;

        void addPlan(int num_tel, string nom_cliente, string tipo);
        double pagoPlan(int num, int mins, int msgs);
        void addAmigo(int num, string pin);
        void imprimir();

        Tigo();
        virtual ~Tigo();
    protected:
    private:
};

#endif // TIGO_H
