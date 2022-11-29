#include <iostream>
#include <fstream>
#include "setArticles.h"

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
}
