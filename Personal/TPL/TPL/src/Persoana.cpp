#include "Persoana.h"

#include <iostream>

using namespace std;

Persoana::Persoana()
{
    //ctor
    balanta = 0;
    bilet = false;
}

Persoana::~Persoana()
{
    //dtor
}
Persoana::Persoana(int _balanta, bool _bilet)
{
    balanta = _balanta;
    bilet = _bilet;
}
int Persoana::getBalanata()
{
    return balanta;
}
void Persoana::setBalanta(int _balanta)
{
    balanta = _balanta;
}
void Persoana::cumparaBilet()
{
    if(balanta > 0)
    {
        bilet = true;
        balanta -= 3;
    }
    else
    {
        bilet = false;
        cout << "Fonduri Insuficiente!" << endl;
    }
}
bool Persoana::getBilet()
{
    return bilet;
}
