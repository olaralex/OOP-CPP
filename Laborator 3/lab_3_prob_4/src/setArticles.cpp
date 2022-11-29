#include "setArticles.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>

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
    file.open(filename, ios::in);
    while(!file.eof())
    {
        char linie[50];
        file.getline(linie,50);
        cout << linie << endl;
        char *ptr = strtok(linie, " ");
        cout << ptr << endl;
        a[no_articles].title = new char[strlen(ptr)];
        strcpy(a[no_articles].title,ptr);

        ptr = strtok(NULL, " ");
        cout << ptr << endl;
        a[no_articles].author = new char[strlen(ptr)];
        strcpy(a[no_articles].author,ptr);

        ptr = strtok(NULL, " ");
        cout << ptr << endl;
        a[no_articles].ID = atoi(ptr);
//        strcpy(a[no_articles].ID,ptr);

        ptr = strtok(NULL, " ");
        cout << ptr << endl;
        a[no_articles].price = atoi(ptr);

        ptr = strtok(NULL, " ");
        cout << ptr << endl;
        a[no_articles].no_copies = atoi(ptr);
    }

}
