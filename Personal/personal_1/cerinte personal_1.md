Sa se foloseasca si sa se implementeze clasa:
```c++
struct person
{
    char *nume;
    char *prenume;
    int varsta;
    int nota_poo;

};

class student
{
public:
    student();
    student(char *filename);
    void addStudent(person a);
    void addStudent(char *nume, char *prenume, int varsta, int nota_poo);
    void showStudents();
    virtual ~student();

protected:

private:
    fstream file;
    int no_person=0;
    person a[20];
};
```
