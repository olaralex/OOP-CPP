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

Sir::Sir()
{
    //ctor
}

Sir::~Sir()
{
    //dtor
}

///Constructors
Sir::Sir(float x, float y, float z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}

///Afisare
void Sir::afisare()
{
    cout<< x << " " << y << " " << z << endl;
}


///Adunare a 2 Sir-uri
void Sir::adunareSir(Sir A, Sir B)
{
    this->x=A.x+B.x;
    this->y=A.y+B.y;
    this->z=A.z+B.z;
}

///Scadere a 2 Sir-uri
void Sir::scadereSir(Sir A, Sir B)
{
    this->x=A.x-B.x;
    this->y=A.y-B.y;
    this->z=A.z-B.z;
}

///Adunarea unei val. la un Sir
void Sir::valoareSir(int v, Sir A)
{
    this->x=A.x+v;
    this->y=A.y+v;
    this->z=A.z+v;
}

///Suma prod. a 2 Sir-uri
void Sir::sumaProd(Sir A, Sir B)
{
    int suma;
    suma = (A.x*A.y*A.z)+(B.x*B.y*B.z);
    cout << suma << endl;
}
