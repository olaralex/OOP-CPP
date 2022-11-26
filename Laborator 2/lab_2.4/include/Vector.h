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
        void stergere_el();
        void stergere_poz();
        void cauta_v();
        void vid_v();

    protected:

    private:
        int n, v[100];
};

#endif // VECTOR_H
