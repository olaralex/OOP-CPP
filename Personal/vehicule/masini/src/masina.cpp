#include "masina.h"

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

masina::masina()
{
    //ctor
}

masina::~masina()
{
    //dtor
}

///Constructor
masina::masina(int _pret, char* _marca, float _capacitateMotor)
{
    pret = _pret;
    marca = new char[strlen(_marca)+1];
    strcpy(marca,_marca);
    capacitateMotor = _capacitateMotor;
}

///Constructor pt Masina Electirca
masina::masina(int _pret, char* _marca)
{
    pret = _pret;
    marca = new char[strlen(_marca)+1];
    strcpy(marca,_marca);
}

///Afisare
char* masina::afisare()
{
    sprintf(show,"Masina:\nPret: %d $\nMarca: %s\nCapacitate Motor: %.1f L\n",pret,marca,capacitateMotor);
    return show;
}

///Set pret
void masina::setPret(int _pret)
{
    pret = _pret;
}

///Afisare doar pret
int masina::getPret()
{
    return pret;
}
