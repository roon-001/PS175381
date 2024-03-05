#include <stdio.h>
#include <stdlib.h>

int main() {
    int liczba1;
    int liczba2;
    int maksymalna;

    printf("Podaj 1. liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj 2. liczbe: ");
    scanf("%d", &liczba2);

    maksymalna = (liczba1 > liczba2) ? liczba1 : liczba2;

    printf("Najwieksza liczba to: %d\n", maksymalna);

    return 0;
}
