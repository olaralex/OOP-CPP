#ifndef DISCIPLINA_H
#define DISCIPLINA_H

///Clase
#include "Exceptie.h"
#include "Profesor.h"
#include "Persoana.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

class Disciplina : public Profesor // profesorului titular
{
    static int nextID;
    int id_disc;
    char denumire[20];
    char _buff[50];
public:
    Disciplina( char _den[], Profesor &p);
    int getIDDisc(void);
    char* retNumeComplet(void);
    char* retProfesor(void);
};

#endif // DISCIPLINA_H
