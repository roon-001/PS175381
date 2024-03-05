#include <stdio.h>
#include <stdlib.h>

int main() {
    int liczba1;
    int liczba2;
    int liczba3;

    printf("Podaj 1. liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj 2. liczbe: ");
    scanf("%d", &liczba2);
    printf("Podaj 3. liczbe: ");
    scanf("%d", &liczba3);

    if (liczba1 < liczba2 && liczba1 < liczba3) {
        printf("Najmniejsza liczba to: %d\n", liczba1);
    }
    if (liczba2 < liczba1 && liczba2 < liczba3) {
        printf("Najmniejsza liczba to: %d\n", liczba2);
    }
    if (liczba3 < liczba2 && liczba3 < liczba1) {
        printf("Najmniejsza liczba to: %d\n", liczba3);
    }

    return 0;
}
