#ifndef PLANBLACKBERRY_H
#define PLANBLACKBERRY_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;


class PlanBlackberry : public Plan
{
    public:
        vector<string> pines;
        string pin;

        PlanBlackberry(int num_tel, string nom_cliente, string pin);

        void addPinAmigo(string pin);

        virtual ~PlanBlackberry();
    protected:
    private:
};

#endif // PLANBLACKBERRY_H
