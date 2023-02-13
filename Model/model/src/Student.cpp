///Clase
#include "Exceptie.h"
#include "Student.h"
#include "Persoana.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

Student::Student(Persoana &_pers, const char _nr_mat[], const char _spec[]) : Persoana(_pers)
{
    //de completat
    strcpy(nr_mat,_nr_mat);
    if( strcmp(_spec, "Calculatoare") != 0 && strcmp(_spec, "Automatica") != 0)
    {
        throw Exceptie("STUDENT", "Specializare inegzistenta"); //Exceptie: titlu incorect
    }
    strcpy(specializ,_spec);
}

char* Student::retNumeComplet(void)
{
    //de completat
    strcpy(_buff,nr_mat);
    strcat(_buff," - ");
    strcat(_buff,specializ);
    strcat(_buff," - ");
    strcat(_buff,Persoana::retNumeComplet());
    return _buff;
}

char* Student::retNrMat(void)
{
    //de completat
    return nr_mat;
}

char* Student::retSpec(void)
{
    //de completat
    return specializ;
}
