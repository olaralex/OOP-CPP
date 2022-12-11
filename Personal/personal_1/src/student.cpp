#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include "student.h"

using namespace std;

student::student()
{
    //ctor
}

student::~student()
{
    //dtor
}
student::student(char *filename)
{
    file.open(filename, ios::in);
    char linie[50];
    while(!file.eof())
    {
        file.getline(linie,50);
        cout << "---------------" << endl;
        cout<< "Liniile sunt: " <<linie<<endl;
        cout << "---------------" << endl;
        char* ptr=strtok(linie, " ");
        if(ptr==NULL)
        {
            break;
        }
        a[no_person].nume=new char[strlen(ptr)];
        strcpy(a[no_person].nume,ptr);
        ptr=strtok(NULL," ");

        a[no_person].prenume=new char[strlen(ptr)];
        strcpy(a[no_person].prenume,ptr);
        ptr=strtok(NULL," ");

        a[no_person].varsta=atoi(ptr);
        ptr=strtok(NULL," ");

        a[no_person].nota_poo=atoi(ptr);
        ptr=strtok(NULL," ");

        no_person++;
        delete[]a;
    }
}
void student::addStudent(char *nume, char* prenume, int varsta, int nota_poo)
{
    this->a[no_person].nume=nume;
    this->a[no_person].prenume=prenume;
    this->a[no_person].varsta=varsta;
    this->a[no_person].nota_poo=nota_poo;

    no_person++;

}
void student::showStudents()
{
    for(int i=0; i<no_person; i++)
    {
        cout << "----------" << endl;
        cout << "Numele student: " << a[i].nume << endl;
        cout << "Prenume student: " << a[i].prenume << endl;
        cout << "Varsta student: " << a[i].varsta << endl;
        cout << "Nota POO student: " << a[i].nota_poo << endl;
        cout << "----------" << endl;
    }
}
