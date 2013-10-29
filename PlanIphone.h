#ifndef PLANIPHONE_H
#define PLANIPHONE_H
#include "Plan.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


class PlanIphone : public Plan
{
    public:
        string email;
        PlanIphone(int num_tel, string nom_cliente, string email);

        double pagoMensual(int mins, int msgs);

        void toString();

        string getEmail();



        virtual ~PlanIphone();
    protected:
    private:
};

#endif // PLANIPHONE_H
