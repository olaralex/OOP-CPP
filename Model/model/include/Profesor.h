#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persoana.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

class Profesor : public Persoana
{
    static int nextID;
    int id_prof;
    char titlu[20]; /* profesor / conferentiar / s.l. / asistent */
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Profesor( Persoana &p, char _titlu[]);
    int getIDProf(void);
    char* retNumeComplet(void);
};
//int Profesor::nextID = 0;/*init membru static*/

#endif // PROFESOR_H
