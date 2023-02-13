///Clase
#include "Exceptie.h"
#include "Curicula.h"
#include "Disciplina.h"
#include "Student.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

Curicula::Curicula(const char _spec[]) : N(0)
{
    // de tratat posibilele exceptii
    if(strcmp(_spec,"Calculatoare") != 0 && strcmp(_spec,"Automatica") != 0)
    {
        throw Exceptie("CURICULA","Specializare incorecta");
    }
    strcpy( den_specializ, _spec);
}

void Curicula::Add(const int _sem, Disciplina &d, const char _tip[] )
{
    // de tratat posibilele exceptii
    if(strcmp(_tip,"Optionala") != 0 && strcmp(_tip,"Facultativa") != 0 && strcmp(_tip,"Obligatorie") != 0)
    {
        throw Exceptie("CURICULA","Tip incorect");
    }
    sem[N] = _sem;
    id_disc[N] = d.getIDDisc();
    strcpy( tip_disc[N], _tip );
    N++;
}

void Curicula::PrintCuricula(Disciplina *disc[])
{
    for(int i=0; i<N; i++)
    {
        cout << "Semestrul " << sem[i] << ": " << "\n|Specializare - " << den_specializ << "\n|Tip - " << tip_disc[i] << "\n|Discipina - " << disc[i]->retNumeComplet() << endl << endl;
    }
}

void Curicula::PrintCuriculaSem(Disciplina *disc[], const int _sem)
{
    for(int i=0; i<N; i++)
    {
        if(sem[i] == _sem)
        {
            cout << "Semestrul " << sem[i] << ": " << "\n|Specializare - " << den_specializ << "\n|Tip - " << tip_disc[i] << "\n|Discipina - " << disc[i]->retNumeComplet() << endl << endl;
        }
    }
}

void Curicula::PrintProfesori(Profesor *pr[], const char _nume[])
{
    for(int i=0; i<N; i++)
    {
        if(strstr(pr[i]->retNumeComplet(),_nume) != 0 && strstr(pr[i]->retNumeComplet(),_nume) != 0)
        {
            cout <<"Profesorul - " << pr[i]->retNumeComplet() << endl << endl;
        }
    }
}

void Curicula::PrintCuriculaStud(Disciplina *disc[], Student *st[], const int _nr)
{

    for(int j=0; j<N; j++)
    {
        cout << "Semestrul " << sem[j] << ": " << "\n|Specializare - " << st[_nr]->retSpec() << "\n|Tip - " << tip_disc[j] << "\n|Discipina - " << disc[j]->retNumeComplet() << endl << endl;
    }
}
