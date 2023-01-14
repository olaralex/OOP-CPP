#ifndef SCANNER_H
#define SCANNER_H

#include "Bilet.h"

class Scanner : public Bilet
{
    public:
        Scanner();
        virtual ~Scanner();
        void scanBilet(Bilet B);
    protected:

    private:
        int scanari;
        bool scanValabil;
        int scanTimp;
};

#endif // SCANNER_H
