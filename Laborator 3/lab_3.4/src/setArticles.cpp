#include "setArticles.h"
#include <fstream>
#include <iostream>

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
