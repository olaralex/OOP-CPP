#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <sstream>


using namespace std;

const int NrCuricule = 2;
const int NrStudenti = 20;
const int NrProfesori = 18;
const int NrDiscipline = 18;

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

class Persoana
{
protected:
    char* nume;
    char* prenume;
    char* dataNastere; //dd.mm.yyyy
    char buff[200]; // utilizat pentru constructii de siruri returnate
public:
    Persoana()
    {
        nume = new char[strlen("nedefinit")+1];
        prenume = new char[strlen("nedefinit")+1];
        dataNastere = new char[strlen("nedefinit")+1];
    }
    ~Persoana()
    {
        delete[] nume;
        delete[] prenume;
        delete[] dataNastere;
    }
    Persoana(char* _nume, char* _prenume, const char* _dataNastere = "nedefinit")
    {
        nume = new char[strlen(_nume)+1];
        strcpy(nume,_nume);
        prenume = new char[strlen(_prenume)+1];
        strcpy(prenume,_prenume);
        dataNastere = new char[strlen(_dataNastere)+1];
        strcpy(dataNastere,_dataNastere);
    }
    char* retDataNastere(void)
    {
        return dataNastere;
    }
    char* retNumeComplet(void)
    {
        strcpy(buff,"");
        strcat(buff,nume);
        strcat(buff," ");
        strcat(buff,prenume);
        return buff;
    }
    friend istream& operator>>(istream &c, Persoana &p)
    {
        string line;
        getline(c,line);
        stringstream ss(line);
        ss>>p.nume>>p.prenume>>p.dataNastere;
        return c;
    }
};

class Profesor : public Persoana
{
    static int nextID;
    int id_prof;
    char* titlu; // profesor / conferentiar / s.l. / asistent
    char buff[50]; // utilizat pentru constructii de siruri returnate
public:
    Profesor()
    {
        titlu = new char[strlen("nedefinit")+1];
    }
    ~Profesor()
    {
        delete[] titlu;
    }
    Profesor( Persoana &p, char* _titlu = "nedefinit") : Persoana(p), id_prof( ++nextID )
    {
        if( strcmp(_titlu, "profesor") != 0 && strcmp(_titlu, "conferentiar") != 0
                && strcmp(_titlu, "s.l." ) && strcmp(_titlu, "asistent" ) != 0 )
            throw Exceptie("PROFESOR", "Titlu incorect"); //Exceptie: titlu incorect

        strcpy(titlu, _titlu);
    }
    int getIDProf(void)
    {
        return id_prof;
    }
    char* retNumeComplet(void)
    {
        strcpy(buff,titlu);
        strcat(buff," ");
        strcat(buff,nume);
        strcat(buff," ");
        strcat(buff,prenume);
        return buff;
    }
};
int Profesor::nextID = 0;//init membru static

class Student : public Persoana
{
    char nr_mat[20];    //numar matricol
    char specializ[20]; //Specializare
    char _buff[50]; // utilizat pentru constructii de siruri returnate
public:
    Student(Persoana &_pers, char _nr_mat[], char _spec[])
    {
        strcpy(nr_mat,_nr_mat);
        strcpy(specializ,_spec);
    }
    char* retNumeComplet(void)
    {
        return retNumeComplet();
    }
    char* retNrMat(void)
    {
        return nr_mat;
    }
    char* retSpec(void)
    {
        return specializ;
    }
};

class Disciplina : public Profesor // profesorului titular
{
    static int nextID;
    int id_disc;
    char denumire[20];
public:
    Disciplina( char _den[], Profesor &p) : Profesor( p )
    {
        //de initializat ID-ul corect
        strcpy(denumire, _den);
    }
    int getIDDisc(void)
    {
        return id_disc;
    }
    char* retNumeComplet(void)
    {
        return retNumeComplet();
    }
    char* retProfesor(void)
    {

    }
};


class Curicula
{
    int N;                  //numarul total de discipline
    char den_specializ[50]; //Specializare
    int  sem[20];           //semestre: 1/2/3/4/5/6/7/8...
    int  id_disc[20];       //id-uri discipline din curicula
    char tip_disc[20][10];  //Obigatorie/Facultativa/Optionala ...
public:
    Curicula(char _spec[]) : N(0)
    {
        strcpy( den_specializ, _spec);
    }
    void Add( int _sem, Disciplina &d, char _tip[] )
    {
        sem[N] = _sem;
        id_disc[N] = d.getIDDisc();
        strcpy( tip_disc[N], _tip );
        N++;
    }
};

int main()
{
    cout << "[MODEL EXAMEN POO - 2022]" << endl;
    cout << "\nINTRODUCERE DATE" << endl;

    /*
    Persoana p1("Ionescu", "Ion", "20.03.1992");
    Persoana p2("Popescu", "Vasile", "10.04.1993");
    Persoana p3;
    cin>>p3;
    cout << p3.retNumeComplet() << endl;
    Persoana pr1("MARINESCU", "Vasile", "23.09.1972"), pr2("CORBU", "Stefan", "11.02.1973"), pr3;
    cin>>pr3;
    cout << pr3.retNumeComplet() << endl;
    */

    try
    {
        Persoana p1("Ionescu", "Ion", "20.03.1992"), p2("Popescu", "Vasile", "10.04.1993"), p3;
        //cin>>p3;
        Student  *st[NrStudenti];
        st[0] = new Student( p1, "01/C", "Calculatoare" );
        st[1] = new Student( p2, "02/C", "Calculatoare" );
        st[2] = new Student( p3, "01/AIA", "Automatica" );

        Persoana pr1("MARINESCU", "Vasile", "23.09.1972"), pr2("CORBU", "Stefan", "11.02.1973"), pr3;
        //cin>>pr3;
        Profesor *pr[NrProfesori];
        pr[0] = new Profesor( pr1, "s.l.");
        pr[1] = new Profesor( pr2, "profesor");
        pr[2] = new Profesor( pr3, "conferentiar" );

        Disciplina *disc[ NrDiscipline ];
        disc[0] = new Disciplina("PCLP I", *pr[0]);
        disc[1] = new Disciplina("Fizica", *pr[2]);
        disc[2] = new Disciplina("Analiza matematica", *pr[2]);

        cout<<"\tTeste POLIMORFISM:"<<endl;
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

        /*
        Curicula *curicula[ NrCuricule ];
        curicula[0] = new Curicula( "Calculatoare" );
        curicula[0]->Add(1, *disc[0], "Obligatorie");
        curicula[0]->Add(1, *disc[1], "Obligatorie");
        curicula[0]->Add(5, *disc[2], "Optionala");

        curicula[1] = new Curicula( "Automatica" );
        curicula[1]->Add(1, *disc[1], "Obligatorie");
        curicula[1]->Add(1, *disc[2], "Obligatorie");
        */
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
    //st[0].introduNote( curicula, 1 );
    //st[0].introduNote( curicula, 2 );
    //st[0].situatieScolara( curicula );

    cout <<"\tAnaliza curicule"<<endl;
    //Curicula::AnalizaIdentic( curicula[0], curicula[1] );
    //Curicula::AnalizaDiferit( curicula[0], curicula[1] );

    cout <<"[END SUBIECT]"<<endl;

    return 0;
}
