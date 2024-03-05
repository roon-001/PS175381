#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1;
    int liczba2;

    printf("podaj 1. liczbe: ");
    scanf("%d", &liczba1);
    printf("podaj 2. liczbe: ");
    scanf("%d", &liczba2);

    if((liczba1 + liczba2) % 2 == 0)
    {
        printf("suma dwoch liczb jest parzysta");
    }
    else
    {
        printf("suma dwoch liczb nie jest parzysta");
    }
    return 0;
}
