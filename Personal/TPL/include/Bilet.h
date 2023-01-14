#ifndef BILET_H
#define BILET_H

#include <iostream>

using namespace std;

class Bilet
{
    public:
        Bilet();
        virtual ~Bilet();
        Bilet(bool _valabilitate, int _timp);
        bool isValid();
        int getTimp();
    protected:

    private:
        bool valabilitate;
        int timp;
};

#endif // BILET_H
