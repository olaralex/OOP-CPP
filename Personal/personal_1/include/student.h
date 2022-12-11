#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <stdlib.h>

using namespace std;

struct person
{
    char *nume;
    char *prenume;
    int varsta;
    int nota_poo;

};

class student
{
public:
    student();
    student(char *filename);
    void addStudent(person a);
    void addStudent(char *nume, char *prenume, int varsta, int nota_poo);
    void showStudents();
    virtual ~student();

protected:

private:
    fstream file;
    int no_person=0;
    person a[20];
};

#endif // STUDENT_H
