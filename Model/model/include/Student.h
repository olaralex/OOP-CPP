#ifndef STUDENT_H
#define STUDENT_H

#include "Persoana.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

class Student : public Persoana
{
    char nr_mat[20];    //numar matricol
    char specializ[20]; //Specializare
    char _buff[100]; // utilizat pentru constructii de siruri returnate
public:
    Student(Persoana &_pers, char _nr_mat[], char _spec[]);
    char* retNumeComplet(void);
    char* retNrMat(void);
    char* retSpec(void);
};

#endif // STUDENT_H
