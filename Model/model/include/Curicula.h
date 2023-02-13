#ifndef CURICULA_H
#define CURICULA_H

///Clase
#include "Exceptie.h"
#include "Disciplina.h"
#include "Profesor.h"
#include "Student.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

class Curicula
{
    int N;                  //numarul total de discipline
    char den_specializ[50]; //Specializare
    int  sem[20];           //semestre: 1/2/3/4/5/6/7/8...
    int  id_disc[20];       //id-uri discipline din curicula
    char tip_disc[20][20];  //*Obigatorie/Facultativa/Optionala ..
public:
    Curicula(const char _spec[]);
    void Add(const int _sem, Disciplina &d, const char _tip[] );
    void PrintCuricula(Disciplina *disc[]);
    void PrintCuriculaSem(Disciplina *disc[], const int _sem);
    void PrintProfesori(Profesor *pr[], const char _nume[]);
    void PrintCuriculaStud(Disciplina *disc[], Student *st[], const int _nr);
};

#endif // CURICULA_H
