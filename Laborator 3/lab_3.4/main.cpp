#include <iostream>
#include <string>
#include <fstream>
#include "setArticles.h"

using namespace std;

int main()
{
    setArticles art("fisier.txt");
    art.showArticles();
    //art.addArticle(article a);
    art.addArticle("POO", "Mihai", 12, 98.7, 6);
    art.showArticles();
    art.noArtSmallerThan(37);
    //art.getAuthor(123);
    art.getPrice(12);
    //art.getTitle(123);
    art.getTotalPrice();

    return 0;
}
