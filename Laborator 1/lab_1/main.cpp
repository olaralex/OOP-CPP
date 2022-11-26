#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#define square(x) ((x)*(x))
#define MAX(i, j) (((i) > (j)) ? i : j)
#define TYPE1 14
#define TYPE2 5
#define TYPE(n) TYPE##n
#define concatenare(a, b) a##b
#define to_str(s) #s
#define Show(x) cout << x << endl;
#define TYPE i##nt

#define x 150
#if x > 200
#undef x
#define x 200
#elif x < 50
#undef x
#define x 50
#else
#undef x
#define x 100
#endif

using namespace std;

void Sort(char * msg, ...)
{
    va_list ap;
    va_start(ap, msg);
    int arg;
    int v[100];
    int i, j, temp, n = 0;
    cout << "" << msg << endl;
    while( (arg = va_arg(ap, int)) !=0 )
    {
        v[n] = arg;
        n++;
    }
    va_end( ap );
//Sortarea propriuzisa
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if( v[i] > v[j] )
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
    for(i = 0; i < n; i++)
        cout << "v[" << i << "]" << "=" << v[i] << endl;
}


int main()
{
    int a, b, ab;
    a = 1;
    b = 24;
    TYPE bc = 78;
    ab = concatenare(b,c);
    cout << "13^2 =" << square(13) << endl;
    cout << "Max = " << MAX(a, b) << endl;
    cout << TYPE(1) << endl;
    cout << TYPE(2) << endl;
    cout << ab << endl;
    cout << to_str(Lab1 POO) << endl;
    Show(b);
    cout << x << endl;
    Sort("Sorted #1", 3, 2, 9, 3, 1, 0);
    Sort("Sorted #2", 11, 2, -3, 4, 21, 44, 12, 0);
    return 0;
}
