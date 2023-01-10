#include "masinaElectrica.h"
#include "masina.h"

#include <iostream>
#include <string>

using namespace std;

masinaElectrica::masinaElectrica()
{
    //ctor
}
masinaElectrica::~masinaElectrica()
{
    //dtor
}

///Constructor
masinaElectrica::masinaElectrica(int _pret, char* _marca, int _autonomie) : masina(_pret,_marca)
{
    autonomie = _autonomie;
}

///Afisare
char* masinaElectrica::afisare()
{
    sprintf(show,"Masina Electrica:\nPret: %d $\nMarca: %s\nAutonomie: %d km",getPret(),marca,autonomie);
    return show;
}
