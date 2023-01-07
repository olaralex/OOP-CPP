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
    s_1.afisare();
    s_2.afisare();
    s_3.afisare();
}

///Adunare 2 Mat.
void Matrice::adunareMat(Matrice X, Matrice Y)
{
    //this->s_1=X.s_1.x+Y.s_1.x;
    //this->s_2=X.s_2.y+Y.s_2.y;
    //this->s_3=X.s_3.z+Y.s_3.z;
    s_1.adunareSir(X.s_1, Y.s_1);
    s_2.adunareSir(X.s_2, Y.s_2);
    s_3.adunareSir(X.s_3, Y.s_3);
}

///Scadere 2 Mat.
void Matrice::scadereMat(Matrice X, Matrice Y)
{
    s_1.scadereSir(X.s_1, Y.s_1);
    s_2.scadereSir(X.s_2, Y.s_2);
    s_3.scadereSir(X.s_3, Y.s_3);
}
