#ifndef MATRICE_H
#define MATRICE_H

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


class Matrice
{
    Sir s_1, s_2, s_3;

    public:
        Matrice();
        //Constructor
        Matrice(Sir A, Sir B, Sir C);
        virtual ~Matrice();
        //Afisare
        void afisareMat();
        void adunareMat(Matrice X, Matrice Y);
        void scadereMat(Matrice X, Matrice Y);
    protected:

    private:
};

#endif // MATRICE_H
