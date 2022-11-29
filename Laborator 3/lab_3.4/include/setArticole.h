#include <fstream>
#include <iostream>
#ifndef SETARTICOLE_H
#define SETARTICOLE_H


struct article
{
int ID;//ID-ul aticolululi
char *title;
char *author;
float price;
int no_copies;
};

class setArticole
{
public:
    setArticles();
    setArticles(char *filename);//citim datele din fisier
///exemplu: titlu1 autor1 1236 45.7 8
    void addArticle(article a);
    void addArticle(char *title, char* author, int ID, float price, int no_copies);
    float getTotalPrice();
    void showArticles();
    virtual ~setArticole();
    int noArtSmallerThan(float price);
    void sortByTitle();
    void sortByAuthor();
    void addInFileNewArticle(char *filename);
//adauga la finalul fisierului articolele adaugate cu functia addArticol
    bool checkIdUnicity();
    void setTitle(char * newTite, int ID);
//modificarea titlului articolului cu id-ul ID
    void setAuthor(char * newAuthor, int ID);
//modificarea autorului articolului cu id-ul ID
    void setPrice(float newPrice, int ID);
//modificarea pretului articolului cu id-ul ID
    void setID(char * title, char * author);
//modifcarea id-lui articolului cu titlul title si autor author
    char * getTitle(int ID);
    char * getAuthor(int ID);
    float getPrice(int ID);
    void deleteArt(int ID);

protected:

private:
    fstream file;
    int no_articles=0;
    article a[20];
};

#endif // SETARTICOLE_H
