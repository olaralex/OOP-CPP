#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector();
        virtual ~Vector();
        void citire_v();
        void afisare_v();
        void nr_el();
        void sortare_v();
        void inserare_v();

    protected:

    private:
        int n, v[100];
};

#endif // VECTOR_H
