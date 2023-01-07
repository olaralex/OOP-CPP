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
    cout << "Sirul s_1: " << endl;
    s_1.afisare();
    cout << "----------" << endl;

    ///Creare Sir s_2 + Afisare
    Sir s_2(0,-3.2,1.05);
    cout << "Sirul s_2: " << endl;
    s_2.afisare();
    cout << "----------" << endl;

    ///Creare sir s_3 + Afisare
    Sir s_3(1, 2, 3);
    cout << "Sirul s_3: " << endl;
    s_3.afisare();
    cout << "----------" << endl;

    ///Adunarea a 2 Sir-uri + Afisarea Sir-ului modificat
    cout << "Adunarea sirului s_1 cu s_2 si atribuirea datelor lui s_2: " << endl;
    s_2.adunareSir(s_1, s_2);
    cout << "Sirul s_2: " << endl;
    s_2.afisare();
    cout << "----------" << endl;

    ///Adunarea unei val. la un Sir + afisarea Sir-ului modificat
    s_1.valoareSir(5,s_1);
    cout << "Adunarea cu 5 a elementelor din s_1: " << endl;
    s_1.afisare();
    cout << "----------" << endl;

    ///Suma prod. a doua Sir-uri
    cout << "Suma prod. sir-urilor s_1 si s_2: " << endl;
    s_2.sumaProd(s_1, s_2);
    cout << "----------" << endl;

    ///Scaderea a 2 Sir-uri + Afisarea Sir-ului modificat
    cout << "Adunarea sirului s_1 cu s_2 si atribuirea datelor lui s_2: " << endl;
    s_1.scadereSir(s_1,s_2);
    cout << "Sirul s_1: " << endl;
    s_1.afisare();
    cout << "----------" << endl;

    ///Creare matrice m_1 + Afisare
    Matrice m_1(s_1, s_2, s_3);
    cout << "Matricea m_1: " << endl;
    m_1.afisareMat();
    cout << "----------" << endl;

    ///Creare matrice m_2 + Afisare
    Matrice m_2(s_1, s_2, s_3);
    cout << "Matricea m_2: " << endl;
    m_2.afisareMat();
    cout << "----------" << endl;

    ///Adunarea a 2 matrici
    cout << "Adunarea matricilor m_1 si m_2 cu schimbarea valorilor din matricea m_1: " << endl;
    m_1.adunareMat(m_1, m_2);
    cout << "Matricea m_1: " << endl;
    m_1.afisareMat();
    cout << "----------" << endl;

    ///Scaderea a 2 matrici
    cout << "Scaderea matricilor m_2 si m_1 cu schimbarea valorilor din matricea m_2: " << endl;
    m_2.scadereMat(m_1, m_2);
    cout << "Matricea m_2: " << endl;
    m_2.afisareMat();
    cout << "----------" << endl;

    return 0;
}
