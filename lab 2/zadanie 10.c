#include <stdio.h>
#include <stdlib.h>


int main() {
    int liczba;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    (liczba % 2 == 0) ? printf("Liczba jest parzysta.\n") : printf("Liczba jest nieparzysta.\n");

    return 0;
}
