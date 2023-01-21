#ifndef CARTE_H
#define CARTE_H

#include "carte.h"
#include "capitol.h"

class carte : public capitol
{
    public:
        carte();
        virtual ~carte();
        carte(char* _titlu, int _nrPag, int _pret, char* _categorie);
        carte(carte &c);
        int getPret();
        void setPret(int _pret);
        char* getCategorie();
        void setCategorie(char* _categorie);
        virtual char *toString();
        friend ostream& operator<<(ostream &p, carte &c);
        friend istream& operator>>(ostream &p, carte &c);
        carte& operator = (carte &c);
        carte operator + (int x);
        carte operator - (int x);
        friend bool operator==(const carte & a, const carte & b);
        friend bool operator<=(const carte & a, const carte & b);
        friend bool operator>=(const carte & a, const carte & b);
    protected:
        char* categorie;
    private:
        int pret;
        char buff [200];
};

#endif // CARTE_H
