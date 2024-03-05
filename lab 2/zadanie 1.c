#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;

    printf("podaj liczbe: ");
    scanf("%d", &liczba);

    if(liczba>0) {
        printf("liczba jest dodatnia\n");
    }
    if(liczba<0) {
        printf("liczba jest ujemna\n");
    }
    if(liczba==0) {
        printf("liczba jest zerem\n");
    }
    return 0;
}