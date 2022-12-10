#include "setArticles.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

setArticles::setArticles()
{
    //ctor
}

setArticles::~setArticles()
{
    //dtor
}
setArticles::setArticles(char *filename)
{
    file.open("fisier.txt", ios::in);
    char linie[50];
    while(!file.eof())
    {
        file.getline(linie,50);
        cout << "---------------" << endl;
        cout<< "Liniile sunt: " <<linie<<endl;
        cout << "---------------" << endl;
        char* ptr=strtok(linie, " ");
        if(ptr==NULL)
        {
            break;
        }
        a[no_articles].title=new char[strlen(ptr)];
        strcpy(a[no_articles].title,ptr);
        ptr=strtok(NULL," ");

        a[no_articles].author=new char[strlen(ptr)];
        strcpy(a[no_articles].author,ptr);
        ptr=strtok(NULL," ");

        a[no_articles].ID=atoi(ptr);
        ptr=strtok(NULL," ");

        a[no_articles].price=atof(ptr);
        ptr=strtok(NULL," ");

        a[no_articles].no_copies=atoi(ptr);
        ptr=strtok(NULL," ");

        no_articles++;
        delete[]a;
    }
}

void setArticles::showArticles()
{
    for(int i=0;i<no_articles;i++)
    {
        cout<< "---------------" << endl;
        cout<< "ARTICLE NR. " << i << endl << endl;
        cout<< "Title: " <<a[i].title<<endl;
        cout<< "Author: " <<a[i].author<<endl;
        cout<< "ID: " <<a[i].ID<<endl;
        cout<< "Price: " <<a[i].price<<endl;
        cout<< "Copies: " <<a[i].no_copies<<endl;
        cout<< "---------------" << endl << endl;
    }
}

/*
void setArticles::addArticle(article a)
{
    int id;
    char titlu[50];
    char autor[50];
    float pret;
    int no_copie;

    cout << "Adauga un articol nou" << endl;

    cout << "Titlul Articolului: ";
    cin >> titlu;
    a[no_articles].title=new char [strlen(titlu)];
    a[no_articles].title=titlu;

    cout << "Autorul Articolului: ";
    cin >> autor;
    a[no_articles].author=new char [strlen(autor)];
    a[no_articles].author=autor;

    cout << "ID-ul Articolului: ";
    cin >> id;
    a[no_articles].ID=id;

    cout << "Pretul Articolului: ";
    cin >> pret;
    a[no_articles].price=pret;

    cout << "Nr. De Publicari: ";
    cin >> no_copie;
    a[no_articles].no_copies=no_copie;

    no_articles++;
}
*/

void setArticles::addArticle(char *title, char* author, int ID, float price, int no_copies)
{
    a[no_articles].title=new char [strlen(title)];
    a[no_articles].title=title;
    a[no_articles].author=new char [strlen(author)];
    a[no_articles].author=author;
    a[no_articles].ID=ID;
    a[no_articles].price=price;
    a[no_articles].no_copies=no_copies;

    no_articles++;
}
int setArticles::noArtSmallerThan(float price)
{
    cout << "---------------" << endl;
    cout << "Preturile mai mari decat " << price << " ale articolelor sunt:" << endl;
    for(int i=0;i<no_articles;i++)
    {
        if(a[i].price>price)
        {
            cout << "Articolul " << i << ". " << a[i].price << endl;
        }
    }
    cout << "---------------" << endl;
}
/*
char setArticles::* getTitle(int ID)
{
    for(int i=0;i<no_articles;i++)
    {
        if(a[i].ID=ID)
        {
            cout << "Articolul " << i << ". " << a[i].title << endl;
        }
    }
}
char setArticles::* getAuthor(int ID)
{
    for(int i=0;i<no_articles;i++)
    {
        if(a[i].ID==ID)
        {
            cout << "Articolul " << i << ". " << a[i].author << endl;
        }
    }
}
*/
float setArticles::getPrice(int ID)
{
    cout << "---------------" << endl;
    for(int i=0;i<no_articles;i++)
    {
        if(a[i].ID==ID)
        {
            cout << "Articolul " << i << ": " << a[i].price << endl;
        }
    }
    cout << "---------------" << endl;
}
float setArticles::getTotalPrice()
{
    cout << "---------------" << endl;
    for(int i=0;i<no_articles;i++)
    {
        cout << "Pretul total al articolului " << i << " este: " << a[i].price*a[i].no_copies << endl;
    }
    cout << "---------------" << endl;
}
/*
void setArticles::deleteArt(int ID)
{
    for(int i=0;i<no_articles;i++)
    {
        if(a[i].ID==ID)
        {
            delete a[i].title;
            delete a[i].author;
            delete a[i].ID;
            delete a[i].price;
            delete a[i].no_copies;
        }
    }
}
*/
