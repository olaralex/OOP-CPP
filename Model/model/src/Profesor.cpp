#include "Profesor.h"
#include "Persoana.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

Profesor::Profesor( Persoana &p, char _titlu[]) : Persoana(p), id_prof( ++nextID )
{
    if( strcmp(_titlu, "Profesor") != 0 && strcmp(_titlu, "Conferentiar") != 0 && strcmp(_titlu, "S.L." ) && strcmp(_titlu, "Asistent" ) != 0 )
    {
        throw Exceptie("PROFESOR", "Titlu incorect"); //Exceptie: titlu incorect
    }

    strcpy(titlu, _titlu);
}

int Profesor::nextID = 0;/*init membru static*/

int Profesor::getIDProf(void)
{
    return id_prof;
}

char* Profesor::retNumeComplet(void)
{
    strcpy(_buff,titlu);
    strcat(_buff," - ");
    strcat(_buff,Persoana::retNumeComplet());
    return _buff;
}
