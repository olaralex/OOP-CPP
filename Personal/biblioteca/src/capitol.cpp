#include "capitol.h"
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

capitol::capitol()
{
    //ctor
    titlu = new char[strlen("nedefinit")+1];
    strcpy(titlu,"nedefinit");
    //cout << titlu << endl;
    nrPag = 0;
    //cout << nrPag << endl;
}

capitol::~capitol()
{
    //dtor
    delete []titlu;
}

capitol::capitol(char* _titlu, int _nrPag)
{
    titlu = new char[strlen(_titlu)+1];
    strcpy(titlu,_titlu);
    //cout << titlu << endl;
    nrPag = _nrPag;
    //cout << nrPag << endl;
}

capitol::capitol(capitol &c)
{
    titlu = new char[strlen(c.titlu)+1];
    strcpy(titlu,c.titlu);
    //cout << titlu << endl;
    nrPag = c.nrPag;
    //cout << nrPag << endl;
}

int capitol::getNrPag()
{
    return nrPag;
}

void capitol::setNrPag(int _nrPag)
{
    nrPag = _nrPag;
}

char* capitol::getTitlu()
{
    return titlu;
}

void capitol::serTitlu(char _titlu[50])
{
    titlu = new char[strlen(_titlu)+1];
    strcpy(titlu,_titlu);
}

char* capitol::toString()
{
    char s[25];
    strcpy(buf,"\nNr. Pag.: ");
    sprintf(s,"%d",nrPag);
    strcat(buf,s);
    strcat(buf,"\nTitlul: ");
    strcat(buf,titlu);
    return buf;
}

ostream& operator<<(ostream &p, capitol &c)
{
    p << c.toString();
    return p;
}

istream& operator>>(ostream &p, capitol &c)
{
}

capitol& capitol::operator = (capitol &c)
{
    if(this != &c)
    {
        titlu = new char[strlen(c.titlu)+1];
        strcpy(titlu,c.titlu);
        //cout << titlu << endl;
        nrPag = c.nrPag;
        //cout << nrPag << endl;
    }
}

capitol capitol::operator + (int x)
{
    capitol c;
    c.titlu = new char[strlen(titlu)+1];
    strcpy(titlu,c.titlu);
    //cout << titlu << endl;
    c.nrPag = nrPag + x;
    //cout << nrPag << endl;
    return c;
}

capitol capitol::operator - (int x)
{
    capitol c;
    c.titlu = new char[strlen(titlu)+1];
    strcpy(titlu,c.titlu);
    //cout << titlu << endl;
    c.nrPag = nrPag - x;
    //cout << nrPag << endl;
    return c;
}

bool operator==(const capitol & a, const capitol & b)
{
    if(a.nrPag == b.nrPag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator>=(const capitol & a, const capitol & b)
{
    if(a.nrPag >= b.nrPag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator<=(const capitol & a, const capitol & b)
{
    if(a.nrPag <= b.nrPag)
    {
        return true;
    }
    else
    {
        return false;
    }
}
