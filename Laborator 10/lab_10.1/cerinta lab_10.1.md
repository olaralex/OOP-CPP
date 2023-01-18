1. Implementati:
```c++
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
Articol(int _pret, const char* _titlul = "nedefinit");
/// Exceptie daca _pret < 0
Articol(const Articol &p);
Articol ();
virtual ~Articol();
int getPret();
void setPret(int c);
/// Exceptie daca _pret < 0
char *getTitlul();
void setTitlul(char _titlul[20]);
virtual char *toString();
friend ostream& operator<<(ostream &c, Articol &p);
friend istream& operator>>(istream &c, Articol &p);
Articol& operator = (const Articol &p)
{
/*
if (this != &p)
{
pret = p.pret;
titlul = new char[strlen(p.titlul)+1];
strcpy(titlul, p.titlul);
}
return *this;*/
}
Articol operator + (int x)
{
/*Articol a;
a.pret=pret+x;
a.titlul = new char[strlen(titlul)+1];
strcpy(a.titlul, titlul);
return a;*/
}
///creste pretul cu x lei.
Articol operator-(int x);
///scade pretul cu x lei,
///exceptie daca pretul unui articol scade sub 0 lei
friend bool operator==(const Articol & a, const Articol & b);
///verifica daca doua obiecte au acelasi titlu (strcmp)
friend bool operator>=(const Articol & a, const Articol & b);
///verifica preturile
friend bool operator<=(const Articol & a, const Articol & b);
///verifica preturile
};
class Revista: public Articol
{
int nr;///Numarul revistei
int frecv;/// Numarul de aparitii pe luna
char buf [200];
public:
Revista(int _pret, const char* _titlul, int _nr, int _frecv);
///exceptii daca _nr si _frecv sunt mai mici decat 0
Revista(const Revista &p);
virtual ~Revista();
Revista();
int getNr();
int getFrecv();
void setNr(int _nr);
void setFrecv(int _frecv);
char *toString();
Revista& operator = (const Revista &p)
{
/*if (this != &p)
{
Articol::operator=(p);
nr=p.nr;
frecv=p.frecv;
}
return *this;*/
}
friend ostream& operator<<(ostream &c, Revista &p);
friend istream& operator>>(istream &c, Revista &p);
Revista operator * (int x);
/// Inmulteste pretul cu x lei.
Revista operator / (int x)
{
/*Revista r;
r.nr=nr;
r.frecv=frecv;
r.setPret(getPret()/x);
r.setTitlul(titlul);
return r;*/
///sau
/*return Revista(getPret()/x, titlul,nr, frecv);
*/
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
///1. instantiati clasele si testati metodele implementate
///2. construiti un tablou polimorf
return 0;
}
