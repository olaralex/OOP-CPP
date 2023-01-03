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

int main()
{
    ///Creare Sir s_1 + Afisare
    Sir s_1(3.5,7.2,6.1);
    s_1.afisare();

    ///Creare Sir s_2 + Afisare
    Sir s_2(0,-3.2,1.05);
    s_2.afisare();

    ///Creare sir s_3 + Afisare
    Sir s_3(1, 2, 3);
    s_3.afisare();

    ///Adunarea a 2 Sir-uri + Afisarea Sir-ului modificat
    s_2.adunareSir(s_1, s_2);
    s_2.afisare();

    ///Adunarea unei val. la un Sir + afisarea Sir-ului modificat
    s_1.valoareSir(5,s_1);
    s_1.afisare();

    ///Suma prod. a doua Sir-uri
    s_2.sumaProd(s_1, s_2);

    ///Scaderea a 2 Sir-uri + Afisarea Sir-ului modificat
    s_1.scadereSir(s_1,s_2);
    s_1.afisare();

    ///Creare matrice m_1 + Afisare
    Matrice m_1(s_1, s_2, s_3);
    m_1.afisareMat();
    return 0;
}
