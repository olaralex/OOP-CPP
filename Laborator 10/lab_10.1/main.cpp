#include <iostream>
#include <cstring>

using namespace std;

class Exceptie
{
    char categorieEx[50], tipEx[50];
public:
    Exceptie(const char _categorieEx[], const char _tipEx[])
    {
        strcpy(categorieEx, _categorieEx );
        strcpy(tipEx, _tipEx );
    }
    void Print(void)
    {
        cerr<<"Exceptie ["<<categorieEx<<"] - "<<tipEx<<endl;
    }
};

class Articol
{
protected:
    char *titlul;
private:
    int pret;
    char buf [200];
public:
    Articol(int _pret, const char* _titlul = "nedefinit")
    {
        if(_pret < 0)
        {
            ///Exceptie daca _pret < 0
            throw Exceptie("Articol", "Pret mai mic decat 0");
        }
        pret = _pret;
        titlul = new char[strlen(_titlul)+1];
        strcpy(titlul, _titlul);
    }

    Articol(const Articol &p)
    {
        pret = p.pret;
        titlul = new char[strlen(p.titlul)+1];
        strcpy(titlul, p.titlul);
    }
    Articol ()
    {
        pret = 0;
        titlul = new char[strlen("nedefinit")+1];
        strcpy(titlul, "nedefinit");
    }
    virtual ~Articol()
    {
        delete []titlul;
    }
    int getPret()
    {
        return pret;
    }
    void setPret(int c)
    {
        pret = c;
    }
    char *getTitlul()
    {
        return titlul;
    }
    void setTitlul(char _titlul[20])
    {
        titlul = new char[strlen(_titlul)+1];
        strcpy(titlul, _titlul);
    }
    virtual char *toString()
    {
        char s[25];
        strcpy(buf,"Pret: ");
        sprintf(s,"%d",pret);
        strcat(buf,s);
        strcat(buf,". Titlul: ");
        strcat(buf,titlul);
        return buf;
    }
    friend ostream& operator<<(ostream &c, Articol &p)
    {
        c << p.toString();
        return c;
    }
    friend istream& operator>>(istream &c, Articol &p)
    {
        char s[25];
        fflush(stdin);
        c.getline(s,25);
        p.titlul = new char[strlen(s)+1];
        strcpy(p.titlul, s);
        c>>p.pret;
        return c;
    }
    Articol& operator = (const Articol &p)///const sa nu modificam obiectul original
    {
        if (this != &p)
        {
            pret = p.pret;
            titlul = new char[strlen(p.titlul)+1];
            strcpy(titlul, p.titlul);
        }
        return *this;
    }
    ///////////////////aici
    Articol operator + (int x)
    {
        Articol a;
        a.pret=pret+x;
        a.titlul = new char[strlen(titlul)+1];
        strcpy(a.titlul, titlul);
        return a;
    }
    ///creste pretul cu x lei.
    Articol operator-(int x)
    {
        Articol a;
        if(pret-x<0)
            a.pret=0;
        else
            a.pret=pret-x;
        a.titlul = new char[strlen(titlul)+1];
        strcpy(a.titlul, titlul);
        return a;
    }
    ///scade pretul cu x lei,
///exceptie daca pretul scade sub 0 lei
    friend bool operator==(const Articol & a, const Articol & b)
    {
        if(strcmp(a.titlul, b.titlul)==0)
            return 1;
        return 0;
    }
///verifica daca au acelasi titlu (strcmp)
    friend bool operator>=(const Articol & a, const Articol & b)
    {
        return a.pret >= b.pret;
    }
///verifica preturile
    friend bool operator<=(const Articol & a, const Articol & b)
    {
        return a.pret <= b.pret;
    }
///verifica preturile
};

class Revista: public Articol
{
    int nr;///Numarul revistei
    int frecv;/// Numarul de aparitii pe luna
    char buf [200];
public:
    Revista(int _pret, const char* _titlul, int _nr, int _frecv) : Articol(_pret,_titlul)
    {
        if(_nr < 0)
        {
            throw Exceptie("Revista", "Nr mai mic decat 0");
        }
        nr = _nr;
        if(_frecv < 0)
        {
            throw Exceptie("Revista", "Frecv mai mic decat 0");
        }
        frecv = _frecv;
    }

///exceptii daca _nr si _frecv sunt mai mici decat 0
    Revista(const Revista &p):Articol(p)
    {
        nr=p.nr;
        frecv=p.frecv;
    }
    virtual ~Revista()
    {
    }
    Revista() {}
    int getNr()
    {
        return nr;
    }
    int getFrecv()
    {
        return frecv;
    }
    void setNr(int _nr)
    {
        nr = _nr;
    }
    void setFrecv(int _frecv)
    {
        frecv = _frecv;
    }
    char *toString()
    {
        char s[25];
        strcpy(buf,"Pret: ");
        sprintf(s,"%d",getPret());
        strcat(buf,s);
        strcat(buf,". Titlul: ");
        strcat(buf,titlul);
        strcat(buf,". Nr: ");
        sprintf(s,"%d",nr);
        strcat(buf,s);
        strcat(buf,". Frecv: ");
        sprintf(s,"%d",getFrecv());
        strcat(buf,s);
        return buf;
    }
    Revista& operator = (const Revista &p)
    {
        if (this != &p)
        {
            Articol::operator=(p);
            nr=p.nr;
            frecv=p.frecv;
        }
        return *this;
    }
    friend ostream& operator<<(ostream &c, Revista &p)
    {
        c << p.toString();
        return c;
    }
    friend istream& operator>>(istream &c, Revista &p)
    {
        cout<<"Titlul";
        char s[25];
        int x;
        fflush(stdin);
        c.getline(s,25);
        p.titlul = new char[strlen(s)+1];
        strcpy(p.titlul, s);
        cout<<"Pret";
        p.setPret(x);
        c>>x;
        cout<<"Nr";
        c>>p.nr;
        cout<<"Frecv";
        c>>p.frecv;
        return c;
    }

    Revista operator * (int x)
    {
        Revista r;
        r.nr=nr;
        r.frecv=frecv;
        r.setPret(getPret()*x);
        r.setTitlul(titlul);
        return r;
    }
    /// Inmulteste pretul cu x lei.
    Revista operator / (int x)
    {
        Revista r;
        r.nr=nr;
        r.frecv=frecv;
        r.setPret(getPret()/x);
        r.setTitlul(titlul);
        return r;
    }
    /// Imparte pretul cu x lei.
};
///Considerati clasa Carte care mosteneste clasa Articol si implementati
///metodele corespunzatoare (similar Revista) clasa Carte are ca si data
///membra privata: char isbn[10]; (inclusiv char buf[200];)
///Considerati clasa DomeniuRevista care mosteneste clasa Revista si
///implementati metodele corespunzatoare (constructor, destructor, get(),
///set(), toString(), supradefinire operatori <<, >>)
///clasa ArticolCalculatoare are ca si data membra privata:
///char domeniu[10]; (inclusiv char buf[200];)

int main()
{
    try
    {
        Articol a(12,"Laborator 13");
        Articol b(12,"Laborator 13");
        cout<<a<<endl;
        cout<<"prob"<<endl;
        //a=a+4; //modific pe a
        cout<<a<<endl;
        Articol c;
        c=a+4;
        cout<<a<<endl;
        cout<<c<<endl;
        cout << a.getPret() << endl;
        cout << a.getTitlul() << endl;
        cout << a.toString() << endl;
        cout<<endl<<"================================"<<endl;
        Revista r(23,"POO",-10,50);
        cout<<r<<endl;

        Revista q;
        cin>>q;
        cout<<q<<endl<<endl;
        //r=r*5;//modific pe r
        cout << r << endl;
        ///
        q=r*5;
        cout<<r<<endl;
        cout<<q<<endl;

        cout << r.toString() << endl;
        cout << r.getPret() << endl;
        cout << r.getTitlul() << endl;
        cout << r.getFrecv() << endl;
        cout << r.getNr() << endl;
        cout << a << endl;
        cout << r << endl;
        if(a == b)
        {
            cout << "Merge ==" << endl;
        }
        else cout<<"NU Merge ==" << endl;
        if(a <= b)
        {
            cout << "Merge <=" << endl;
        }
        else cout<<"NU Merge <=" << endl;
        if(a >= b)
        {
            cout << "Merge >=" << endl;
        }
        else cout<<"NU Merge >=" << endl;
        cout<<endl<<"suma\n";
        cout<<r<<endl;
    }
    catch(Exceptie ex)
    {
        ex.Print();
    }
    return 0;
}
