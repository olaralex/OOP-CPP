#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include "student.h"

using namespace std;

int main()
{
    student s("fisier.txt");
    s.addStudent("Popescu", "Ion", 18, 9) ;
    s.addStudent("Georgescu", "Marin", 19, 6) ;
    s.showStudents();;
    return 0;
}
