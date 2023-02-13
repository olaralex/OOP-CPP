#include "Persoana.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

Persoana::Persoana(const char _nume[], const char _prenume[], const char _data_n[])
{
    strcpy(nume,_nume);
    strcpy(prenume,_prenume);
    strcpy(data_n,_data_n);
}

char* Persoana::retDataNastere(void)
{
    /*de completat*/
    return data_n;
}

char* Persoana::retNumeComplet(void)
{
    /*de completat*/
    strcpy(_buff,nume);
    strcat(_buff," ");
    strcat(_buff,prenume);
    return _buff;
}

istream& operator>>(istream& c, Persoana& p)
{
    cout << "Introdu intr-un singur rand: nume, prenume, data nasterii[dd.mm.yyyy]: ";
    c >> p.nume >> p.prenume >> p.data_n;
    if (strlen(p.data_n) != 10)
    {
        throw Exceptie("PERSOANA","Data nasterii incompleta");
    }
    return c;
}
