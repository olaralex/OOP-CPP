///Clase
#include "Exceptie.h"
#include "Persoana.h"
#include "Profesor.h"
#include "Student.h"
#include "Disciplina.h"
#include "Curicula.h"

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

const int NrCuricule = 2;
const int NrStudenti = 20;
const int NrProfesori = 18;
const int NrDiscipline = 18;

/*
class Exceptie
{
    char catEx[50], tipEx[50];
public:
    Exceptie(char _catEx[], char _tipEx[])
    {
        strcpy(catEx, _catEx );
        strcpy(tipEx, _tipEx );
    }
    void Print(void)
    {
        cerr<<"Exceptie ["<<catEx<<"] - "<<tipEx<<endl;
    }
};
*/

/*
class Persoana
{
protected:
    char nume[20], prenume[20], data_n[20]; //dd.mm.yyyy
    char _buff[50]; // utilizat pentru constructii de siruri returnate
public:
    Persoana( char _nume[]="", char _prenume[]="", char _data_n[]="")
    {
        strcpy(nume,_nume);
        strcpy(prenume,_prenume);
        strcpy(data_n,_data_n);
    }
    char* retDataNastere(void)
    {
        //de completat
        return data_n;
    }
    virtual char* retNumeComplet(void)
    {
        //de completat
        strcpy(_buff,nume);
        strcat(_buff," ");
        strcat(_buff,prenume);
        return _buff;
    }
    friend istream& operator>>(istream &c, Persoana &p)
    {
        //de completat
        cout << "Introdu intr-un singur rand: nume, prenume, data nasterii[dd.mm.yyyy]: ";
        c>>p.nume>>p.prenume>>p.data_n;
        if(strlen(p.data_n) != 10)
        {
            throw Exceptie("DATA NASTERE","Data nasterii incompleta");
        }
    }
};
*/

/*
class Profesor : public Persoana
{
    static int nextID;
    int id_prof;
    char titlu[20]; // profesor / conferentiar / s.l. / asistent
    char _buff[50]; // utilizat pentru constructii de siruri returnate
public:
    Profesor( Persoana &p, char _titlu[]) : Persoana(p), id_prof( ++nextID )
    {
        if( strcmp(_titlu, "Profesor") != 0 && strcmp(_titlu, "Conferentiar") != 0 && strcmp(_titlu, "S.L." ) && strcmp(_titlu, "Asistent" ) != 0 )
        {
            throw Exceptie("PROFESOR", "Titlu incorect"); //Exceptie: titlu incorect
        }

        strcpy(titlu, _titlu);
    }
    int getIDProf(void)
    {
        return id_prof;
    }
    char* retNumeComplet(void)
    {
        strcpy(_buff,titlu);
        strcat(_buff," - ");
        strcat(_buff,Persoana::retNumeComplet());
        return _buff;
    }
};
int Profesor::nextID = 0;
*/

/*
class Student : public Persoana
{
    char nr_mat[20];    //numar matricol
    char specializ[20]; //Specializare
    char _buff[100]; // utilizat pentru constructii de siruri returnate
public:
    Student(Persoana &_pers, char _nr_mat[], char _spec[]) : Persoana(_pers)
    {
        //de completat
        strcpy(nr_mat,_nr_mat);
        if( strcmp(_spec, "Calculatoare") != 0 && strcmp(_spec, "Automatica") != 0)
        {
            throw Exceptie("STUDENT", "Specializare inegzistenta"); //Exceptie: titlu incorect
        }
        strcpy(specializ,_spec);
    }
    char* retNumeComplet(void)
    {
        //de completat
        strcpy(_buff,nr_mat);
        strcat(_buff," - ");
        strcat(_buff,specializ);
        strcat(_buff," - ");
        strcat(_buff,Persoana::retNumeComplet());
        return _buff;
    }
    char* retNrMat(void)
    {
        //de completat
        return nr_mat;
    }
    char* retSpec(void)
    {
        //de completat
        return specializ;
    }
};
*/

/*
class Disciplina : public Profesor // profesorului titular
{
    static int nextID;
    int id_disc;
    char denumire[20];
    char _buff[50];
public:
    Disciplina( char _den[], Profesor &p) : Profesor( p )
    {
        //de initializat ID-ul corect
        if( strcmp(_den, "PCLP I") != 0 && strcmp(_den, "Fizica") != 0 && strcmp(_den, "Analiza Matematica" ) != 0)
        {
            throw Exceptie("DISCIPLINA", "Denumire incorecta"); //Exceptie: titlu incorect
        }
        strcpy(denumire, _den);
    }
    int getIDDisc(void)
    {
        //de completat
        return id_disc;
    }
    char* retNumeComplet(void)
    {
        //de completat
        strcpy(_buff,denumire);
        strcat(_buff," - ");
        strcat(_buff,Profesor::retNumeComplet());
        return _buff;
    }
    char* retProfesor(void)
    {
        //de completat
        return Profesor::retNumeComplet();
    }
};
*/

/*
class Curicula
{
    int N;                  //numarul total de discipline
    char den_specializ[50]; //Specializare
    int  sem[20];           //semestre: 1/2/3/4/5/6/7/8...
    int  id_disc[20];       //id-uri discipline din curicula
    char tip_disc[20][20];  //*Obigatorie/Facultativa/Optionala ..
public:
    Curicula(char _spec[]) : N(0)
    {
        // de tratat posibilele exceptii
        strcpy( den_specializ, _spec);
    }
    void Add( int _sem, Disciplina &d, char _tip[] )
    {
        // de tratat posibilele exceptii
        sem[N] = _sem;
        id_disc[N] = d.getIDDisc();
        strcpy( tip_disc[N], _tip );
        N++;
    }
};
*/


int main()
{
    cout << "[MODEL EXAMEN POO - 2015]" << endl;
    cout << "\nINTRODUCERE DATE" << endl;
    try
    {
        Persoana p1("Ionescu", "Ion", "20.03.1992");
        Persoana p2("Popescu", "Vasile", "10.04.1993");
        Persoana p3;
        Persoana p4("Constantinescu", "Sorin", "20.03.1962");
        Persoana p5("Becali", "George", "02.07.1960");
        Persoana p6("Mancdachi", "Stefan", "11.02.1986");
        //cin >> p3;
        Student  *st[NrStudenti];
        st[0] = new Student( p1, "01/C", "Calculatoare" );
        st[1] = new Student( p2, "02/C", "Calculatoare" );
        st[2] = new Student( p3, "01/AIA", "Automatica" );
        /*de continuat*/
        st[3] = new Student( p4, "03/C", "Calculatoare" );
        st[4] = new Student( p5, "04/C", "Calculatoare" );
        st[5] = new Student( p6, "02/AIA", "Automatica" );

        cout << endl;
        cout << "STUDENTII: " << endl;
        for(int i=0;i<6;i++)
        {
            cout << "\t" << st[i]->retNumeComplet() << endl;
        }
        cout << endl;

        Persoana pr1("MARINESCU", "Vasile", "23.09.1972");
        Persoana pr2("CORBU", "Stefan", "11.02.1973");
        Persoana pr3/*pr3("Olar", "Alex", "14.05.2002")*/;
        Persoana pr4("Constantinescu", "Sorin", "20.03.1962");
        Persoana pr5("Becali", "George", "02.07.1960");
        Persoana pr6("Mancdachi", "Stefan", "11.02.1986");
        //cin>>pr3;
        Profesor *pr[NrProfesori];
        pr[0] = new Profesor( pr1, "S.L.");
        pr[1] = new Profesor( pr2, "Profesor");
        pr[2] = new Profesor( pr3, "Conferentiar" );
        /*de continuat*/
        pr[3] = new Profesor( pr4, "S.L.");
        pr[4] = new Profesor( pr5, "Profesor");
        pr[5] = new Profesor( pr6, "Conferentiar" );

        cout << endl;
        cout << "PROFESORII: " << endl;
        for(int i=0;i<6;i++)
        {
            cout << "\t" << pr[i]->retNumeComplet() << endl;
        }
        cout << endl;

        Disciplina *disc[ NrDiscipline ];
        disc[0] = new Disciplina("PCLP I", *pr[0]);
        disc[1] = new Disciplina("Fizica", *pr[1]);
        disc[2] = new Disciplina("Analiza Matematica", *pr[2]);
        /*de continuat*/
        disc[3] = new Disciplina("PCLP I", *pr[3]);
        disc[4] = new Disciplina("Fizica", *pr[4]);
        disc[5] = new Disciplina("Analiza Matematica", *pr[5]);

        cout << endl;
        cout << "DISCIPLINELE: " << endl;
        for(int i=0;i<6;i++)
        {
            cout << "\t" << disc[i]->retNumeComplet() << endl;
        }
        cout << endl;

        cout<<"Teste POLIMORFISM:"<<endl;
        Persoana *pers[4];
        pers[0] = &p1;
        pers[1] = st[1];
        pers[2] = pr[2];
        pers[3] = disc[1];
        cout<<"\tPersoana  : "<<pers[0]->retNumeComplet()<<endl;
        cout<<"\tStudentul : "<<pers[1]->retNumeComplet()<<endl;
        cout<<"\tProfesorul: "<<pers[2]->retNumeComplet()<<endl;
        cout<<"\tDisciplina: "<<pers[3]->retNumeComplet()<<endl;
        cout<<"\tEND Teste POLIMORFISM!"<<endl;

        Curicula *curicula[ NrCuricule ];
        curicula[0] = new Curicula( "Calculatoare" );
        curicula[0]->Add(1, *disc[0], "Obligatorie");
        curicula[0]->Add(1, *disc[1], "Obligatorie");
        curicula[0]->Add(5, *disc[2], "Optionala");
        /*de continuat*/

        curicula[1] = new Curicula( "Automatica" );
        curicula[1]->Add(1, *disc[1], "Obligatorie");
        curicula[1]->Add(1, *disc[2], "Obligatorie");
        /*de continuat*/
    }
    catch(Exceptie ex)
    {
        ex.Print();
        exit( -2 );
    }
    catch(...)
    {
        cout<<"Exceptie nedefinita!"<<endl;
        exit( -1 );
    }

    cout << "\nCALCULE PROBLEMA" << endl;
    cout <<"\tAfisare curicula"<<endl;
    //curicula[0]->PrintCuricula();
    //curicula[0]->PrintCuricula();

    cout <<"\tAfisare curicula pe semestrul 3"<<endl;
    //curicula[0]->PrintCuriculaSem( 3 );

    cout <<"\tCauta toti profesorii ce contin subsirul 'MARI' in NUME"<<endl;
    //curicula[0]->PrintProfesori("MARI");

    cout <<"\tAfisare curicula pentru un student"<<endl;
    //Curicula::PrintCuriculaStud( curicula, st[1] );

    cout <<"\tAdministrare Note Student"<<endl;
    //st[0].introduNote( curicula, /*sem*/1 );
    //st[0].introduNote( curicula, /*sem*/2 );
    //st[0].situatieScolara( curicula );

    cout <<"\tAnaliza curicule"<<endl;
    //Curicula::AnalizaIdentic( curicula[0], curicula[1] );
    //Curicula::AnalizaDiferit( curicula[0], curicula[1] );

    cout <<"[END SUBIECT]"<<endl;
    return 0;
}
