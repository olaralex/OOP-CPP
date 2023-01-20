#ifndef CAPITOL_H
#define CAPITOL_H

#include <iostream>
#include <fstream>

using namespace std;

class capitol
{
    public:
        capitol();
        virtual ~capitol();
        capitol(char* _titlu, int _nrPag);
        capitol(capitol &c);
        int getNrPag();
        void setNrPag(int _nrPag);
        char* getTitlu();
        void serTitlu(char _titlu[50]);
        virtual char *toString();
        friend ostream& operator<<(ostream &p, capitol &c);
        friend istream& operator>>(ostream &p, capitol &c);
        capitol& operator = (capitol &c);
        capitol operator + (int x);
        capitol operator - (int x);
        friend bool operator==(const capitol & a, const capitol & b);
        friend bool operator<=(const capitol & a, const capitol & b);
        friend bool operator>=(const capitol & a, const capitol & b);
    protected:
        char* titlu;
    private:
        int nrPag;
        char buf [200];
};

#endif // CAPITOL_H
