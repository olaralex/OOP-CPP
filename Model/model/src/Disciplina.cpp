#include "Disciplina.h"
#include "Profesor.h"
#include "Persoana.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

Disciplina::Disciplina( char _den[], Profesor &p) : Profesor( p )
{
    //de initializat ID-ul corect
    if( strcmp(_den, "PCLP I") != 0 && strcmp(_den, "Fizica") != 0 && strcmp(_den, "Analiza Matematica" ) != 0)
    {
        throw Exceptie("DISCIPLINA", "Denumire incorecta"); //Exceptie: titlu incorect
    }
    strcpy(denumire, _den);
}
int Disciplina::getIDDisc(void)
{
    //de completat
    return id_disc;
}
char* Disciplina::retNumeComplet(void)
{
    //de completat
    strcpy(_buff,denumire);
    strcat(_buff," - ");
    strcat(_buff,Profesor::retNumeComplet());
    return _buff;
}
char* Disciplina::retProfesor(void)
{
    //de completat
    return Profesor::retNumeComplet();
}
