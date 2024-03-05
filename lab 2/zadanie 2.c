#include <stdio.h>
#include <stdlib.h>

int main() {
    int liczba1;
    int liczba2;

    printf("Podaj 1. liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj 2. liczbe: ");
    scanf("%d", &liczba2);

    if (liczba1 > liczba2) {
        printf("Wieksza liczba to: %d\n", liczba1);
    }

    if (liczba2 > liczba1) {
        printf("Wieksza liczba to: %d\n", liczba2);
    }
    if (liczba1 == liczba2) {
        printf("Podane liczby sa rowne.\n");
    }

    return 0;
}
