#ifndef SIR_H
#define SIR_H

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


class Sir
{
    float x, y, z, v;
    public:
        Sir();
        //Constructor
        Sir(float x, float y, float z);
        virtual ~Sir();
        //Afisare
        void afisare();
        //Adunare a 2 Sir-uri
        void adunareSir(Sir A, Sir B);
        //Scadere a 2 Sir-uri
        void scadereSir(Sir A, Sir B);
        //Adunarea unei val. la Sir
        void valoareSir(int v, Sir A);
        //Suma prod. a 2 Sir-uri
        void sumaProd(Sir A, Sir B);
    protected:

    private:
};

#endif // SIR_H
