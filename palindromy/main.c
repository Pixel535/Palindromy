#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char napis[30];
    scanf("%s", &napis);
    palindrom(napis);
    printf("\n");
    return 0;
}


void palindrom(char* napis)
{
    char odwrocony[30];
    strcpy(odwrocony, napis);
    strrev(odwrocony);
    if (strcmp(napis, odwrocony) == 0)
    {
        printf("jest palindromem");
    }
    else
    {
        printf("nie jest");
    }

    return 0;
}
