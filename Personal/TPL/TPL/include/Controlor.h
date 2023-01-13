#ifndef CONTROLOR_H
#define CONTROLOR_H

#include "Persoana.h"

class Controlor : public Persoana
{
    public:
        Controlor();
        virtual ~Controlor();
        void verificaBilet(Persoana P);
    protected:

    private:
        int amenda = 100;
};

#endif // CONTROLOR_H
