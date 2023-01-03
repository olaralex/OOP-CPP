///librarii
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
///clase
#include "Matrice.h"
#include "Sir.h"

using namespace std;

Matrice::Matrice()
{
    //ctor
}

Matrice::~Matrice()
{
    //dtor
}

///Constructor
Matrice::Matrice(Sir A, Sir B, Sir C)
{
    this->s_1=A;
    this->s_2=B;
    this->s_3=C;
}

///Afisare
void Matrice::afisareMat()
{
    cout << "----------" << endl;
    cout << "Matricea este:" << endl;
    s_1.afisare();
    s_2.afisare();
    s_3.afisare();
    cout << "----------" << endl;
}
