#include "carte.h"
#include "capitol.h"
#include <string.h>

carte::carte() : capitol()
{
    //ctor
    pret = 0;
    categorie = new char[strlen("nedefinit")+1];
    strcpy(categorie, "nedefinit");
}

carte::~carte()
{
    //dtor
    delete []categorie;
}

carte::carte(char* _titlu, int _nrPag, int _pret, char* _categorie) : capitol(_titlu, _nrPag)
{
    pret = _pret;
    categorie = new char[strlen(_categorie)+1];
    strcpy(categorie, _categorie);
}

carte::carte(carte &c) : capitol(c)
{
    pret = c.pret;
    categorie = new char[strlen(c.categorie)+1];
    strcpy(categorie, c.categorie);
}

int carte::getPret()
{
    return pret;
}

void carte::setPret(int _pret)
{
    pret = _pret;
}

char* carte::getCategorie()
{
    return categorie;
}

void carte::setCategorie(char* _categorie)
{
    categorie = new char[strlen(_categorie)+1];
    strcpy(categorie, _categorie);
}

char* carte::toString()
{
    char s[25];
    strcpy(buff,"\nNr. Pag.: ");
    sprintf(s,"%d",getNrPag());
    strcat(buff,s);
    strcat(buff,"\nTitlul: ");
    strcat(buff,titlu);
    strcat(buff,"\nPret: ");
    sprintf(s,"%d",getPret());
    strcat(buff,s);
    strcat(buff,"\nCategorie: ");
    strcat(buff,categorie);
    return buff;
}

ostream& operator<<(ostream &p, carte &c)
{
    p << c.toString();
    return p;
}

istream& operator>>(ostream &p, carte &c)
{

}

carte& carte::operator = (carte &c)
{
    if(this != &c)
    {
        capitol::operator = (c);
        pret = c.pret;
        categorie = new char[strlen(c.categorie)+1];
        strcpy(categorie, c.categorie);
    }
    return *this;
}

carte carte::operator + (int x)
{
    carte c;
    pret = c.pret + x;
}

carte carte::operator - (int x)
{
    carte c;
    pret = c.pret + x;
}

bool operator==(const carte & a, const carte & b)
{
    if(a.pret == b.pret)
    {
        return true;
    }
}
bool operator<=(const carte & a, const carte & b)
{
    if(a.pret <= b.pret)
    {
        return true;
    }
}
bool operator>=(const carte & a, const carte & b)
{
    if(a.pret >= b.pret)
    {
        return true;
    }
}
