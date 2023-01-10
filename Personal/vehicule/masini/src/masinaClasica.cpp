#include "masinaClasica.h"
#include "masina.h"

#include <iostream>
#include <string>

using namespace std;

masinaClasica::masinaClasica()
{
    //ctor
}

masinaClasica::~masinaClasica()
{
    //dtor
}
masinaClasica::masinaClasica(int _pret, char* _marca, float _capacitateMotor, int _an) : masina(_pret,_marca,_capacitateMotor)
{
    an = _an;
}
char* masinaClasica::afisare()
{
    sprintf(show,"Masina Clasica:\nPret: %d $\nMarca: %s\nCapacitate Motor: %.1f L\nAn Fabricare: %d\n",getPret(),marca,capacitateMotor,an);
    return show;
}
