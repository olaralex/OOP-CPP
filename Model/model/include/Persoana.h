#ifndef PERSOANA_H
#define PERSOANA_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

///Clase
#include "Exceptie.h"

using namespace std;

class Persoana
{
public:
    char nume[20], prenume[20], data_n[20]; /*dd.mm.yyyy*/
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Persoana( char _nume[]="", char _prenume[]="", char _data_n[]="");
    char* retDataNastere(void);
    virtual char* retNumeComplet(void);
    friend istream& operator>>(istream &c, const Persoana &p);
};

#endif // PERSOANA_H
