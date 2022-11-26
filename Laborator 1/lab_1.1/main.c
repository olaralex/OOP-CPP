#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Sound(char)
{
    if(tasta == 13)
    {
        printf("\a");
    }
}

int main()
{
    int option;
    char tasta;
    printf("Opt este:");
    scanf("%d", option);
    while(1)
    {
       switch(option)
       {
        case 'a':
            printf("tasta este:");
            scanf("%d", tasta);
            Sound(tasta);
            getch();
            break;
        case 'b':
            getch();
            break;
       }
    }
    return 0;
}
