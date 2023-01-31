#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Produs
{

private:

    char *nume = nullptr;
    //Numele asociat produsului, e.g. ciocolata, lapte, zahar
    char cod[10];
    float pret;
    char buf[100]="";
public:
    Produs(const char *_nume = "_undefined_", const char _cod[20] = "0000aaaa", const float _pret= 0.0) //CONSTRUCTOR
    {
        nume=new char[strlen(_nume)+1];
        strcpy(nume, _nume);
        strcpy(cod, _cod);
        pret=_pret;
    }
    Produs(const Produs &p)//CONSTRUCTOR DE COPIERE
    {
        nume=new char[strlen(p.nume)+1];
        strcpy(nume, p.nume);
        strcpy(cod, p.cod);
        pret=p.pret;
    }
    virtual ~Produs()//DESTRUCTOR
    {
        delete []nume;
    }
    void setNume(const char * nume)
    {
        delete []this->nume;
        this->nume=new char[strlen(nume)+1];
        strcpy(this->nume, nume);
    }
    void setCod(char * cod)
    {
        strcpy(this->cod, cod);
    }
    void setPret(float pret)
    {
        this->pret=pret;
    }
    char* getNume()
    {
        return nume;
    }
    char* getCod()
    {
        return cod;
    }
    float getPret()
    {
        return pret;
    }
    friend istream& operator>>( istream &istr, Produs &n ) //extr. Din flux
    {
        fflush(stdin);
        istr.getline(n.buf, 100);
        n.setNume(n.buf);
        fflush(stdin);
        istr.getline(n.cod,10);
        istr>>n.pret;
        return istr;
    }
    /** DE COMPLETAT *///
    /** de completat polimorfism (0.5 p)**/
    /** lucru cu fisiere (1 p)**/

    char* toString()
    {
        /**de completat (1 p)**/
        /*
        char s[25];
        strcpy(buf,"\n\t\tNume: ");
        strcat(buf,nume);
        strcat(buf,"\n\t\tCod: ");
        strcat(buf,cod);
        strcat(buf,"\n\t\tPret: ");
        sprintf(s,"%f",pret);
        strcat(buf,s);
        */
        sprintf(buf,"\n\t\tNume: %s\n\t\tCod: %s\n\t\tPret: %f",nume,cod,pret);
        return buf;
    }
    friend ostream& operator<<( ostream &ostr, Produs &n ) //ins. In flux
    {
        /**de completat (0.5 p)**/
        ostr << n.toString();
        return ostr;
    }
    Produs& operator =( const Produs& ob2 ) //operatorul de atribuire -obiect
    {
        /**de completat (1 p)**/
        if(this != &ob2)
        {
            nume=new char[strlen(ob2.nume)+1];
            strcpy(nume, ob2.nume);
            strcpy(cod, ob2.cod);
            pret=ob2.pret;
        }
        return *this;
    }
    Produs operator %( const float p )
    {
        /**de completat (1 p)**/
        ///Calculeaza pretul unui produs dupa o crestere de p% (pret+pret*p/100)
        Produs prod;
        prod.pret = pret + (pret*(p/100));
        prod.nume=new char[strlen(nume)+1];
        strcpy(prod.nume, nume);
        strcpy(prod.cod, cod);
        return prod;
    }
    friend bool operator==(Produs &a, Produs &b)
    {
        /**de completat (1 p)**/
        ///Verifica daca toate datele membre sunt egale (nume, cod, pret)
        if(a.pret==b.pret && !strcmp(a.cod,b.cod) && !strcmp(a.nume,b.nume))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class TipProdus: public Produs
{
    char tip[20];
    char buf[100];
public:
    ~TipProdus() {}
    char* getTip()
    {
        return tip;
    }
    char* retNumeTip()
    {
        strcpy(buf, getNume());
        strcat(buf, " - " );
        strcat(buf, tip);
        strcat(buf, ": " );
        strcat(buf, to_string(getPret()).c_str());
        strcat(buf, "lei \n" );
        return buf;
    }
    ///* DE COMPLETAT *///
    TipProdus(const char *_nume = "_undefined_", const char _tip[20]= "_undefined_", const char _cod[20] = "0000aaaa", const float _pret= 0.0) : Produs(_nume,_cod,_pret)
    {
        /**de completat (0.5 p)**/
        strcpy(tip,_tip);
    }
    TipProdus(const TipProdus &p) : Produs(p)
    {
        /**de completat (0.5 p)**/
        strcpy(tip,p.tip);
    }
    char* toString()
    {
        /**de completat (0.5 p)**/
        /*
        char s[25];
        strcpy(buf,"\n\t\tNume: ");
        strcat(buf,getNume());
        strcat(buf,"\n\t\tTip: ");
        strcat(buf,tip);
        strcat(buf,"\n\t\tCod: ");
        strcat(buf,getCod());
        strcat(buf,"\n\t\tPret: ");
        sprintf(s,"%f",getPret());
        strcat(buf,s);
        */
        sprintf(buf,"\n\t\tNume: %s\n\t\tTip: %s\n\t\tCod: %s\n\t\tPret: %f",getNume(),tip,getCod(),getPret());
        return buf;
    }
    friend ostream& operator<<( ostream &ostr, TipProdus &n) //ins. In flux
    {
        /**de completat (0.5 p)**/
        ostr << n.toString();
        return ostr;
    }
    friend istream& operator>>( istream &istr, TipProdus &n) //ins. In flux
    {
        /**de completat (0.5 p)**/
        int x;
        fflush(stdin);
        istr.getline(n.buf, 100);
        n.setNume(n.buf);
        fflush(stdin);
        istr.getline(n.tip,100);
        fflush(stdin);
        istr.getline(n.buf,10);
        n.setCod(n.buf);
        fflush(stdin);
        istr>>x;
        n.setPret(x);
        return istr;

    }
    TipProdus& operator =( const TipProdus& ob2 ) //operatorul de atribuire -obiect
    {
        /**de completat (0.5 p)**/
        /*
        if (this == &ob2)
        {
            return *this;
        }

        delete[] nume;

        nume = new char[strlen(ob2.getNume()) + 1];
        setNume(ob2.getNume());
        setCod(ob2.getCod());
        setPret(ob2.getPret());

        return *this;
        */
    }
};

int main()
{
    Produs a, b("Ciocolata"), c("Ciocolata", "4257hfge"),
           d("Ciocolata", "4257hfge", 5.81), e, suma;
    TipProdus f;
    cout<<a<<b<<c<<d;

    cout<<endl<<endl;
    cout<<"Afisare nou pret dupa o crestere de x%"<<endl;
    suma=d%70;
    cout<<suma;

    cout<<endl<<"Citire de la tastatura obiect de Produs"<<endl;
    cin>>e;
    cout<<e;

    cout<<endl<<"Citire de la tastatura obiect de TipProdus"<<endl;
    cin>>f;
    cout<<f;

    cout<<"\n==verficare egaliatate date=="<<endl;
    if(a==e)
        cout<<"Datele sunt egale\n";
    else
        cout <<"Datele nu sunt egale\n";

    cout<<"\n==========================\n";
    TipProdus *pr[6];
    int nr=6;
    pr[0] = new TipProdus("Mere", "Fructe", "3345dfdf", 3.64);
    pr[1] = new TipProdus("Ciocolata", "Dulciuri", "4257hfge", 5.81);
    pr[2] = new TipProdus("Lapte", "Lactate", "3465jshd", 3.32);
    pr[3] = new TipProdus("Portocale", "Fructe", "4967hdht", 8.24);
    pr[4] = new TipProdus("Pere", "Fructe", "8754ertr", 6.01);
    pr[5] = new TipProdus("Scortisoara", "Condimente", "1249irfh", 1.45);


    cout<<endl<<"afisare date (din pr[]) categoria \"fructe\""<<endl;
    char sir[]="Fructe";
    /** de completat (1 p)**/

    for (int i = 0; i < nr; i++)
    {
        if(!strcmp(pr[i]->getTip(), sir))
        {
            cout << *pr[i] << endl;
        }
    }

    cout<<"\n==========================\n";
    cout<<"\tTeste POLIMORFISM:"<<endl;
    ///Modificati in clasa (clase) pentru a testa polimorfimul in cazul urmator:

    Produs *p[5];
    p[0] = &d;
    p[1] = pr[1];
    p[2] = pr[2];
    p[3] = &c;
    cout<<"\tProdus: "<<p[0]->toString()<<endl;
    cout<<"\tTpProd: "<<pr[1]->toString()<<endl;
    cout<<"\tTpProd: "<<pr[2]->toString()<<endl;
    cout<<"\tProdus: "<<p[3]->toString()<<endl;
    cout<<"\tEND Teste POLIMORFISM!"<<endl<<endl;
    return 0;
}
