#include <stdio.h>
#include <stdlib.h>

int main() {
    int liczba1;
    int liczba2;
    int liczba3;
    int najmniejsza;

    printf("Podaj 1. liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj 2. liczbe: ");
    scanf("%d", &liczba2);
    printf("Podaj 3. liczbe: ");
    scanf("%d", &liczba3);

    najmniejsza = (liczba1 < liczba2) ? (liczba1 < liczba3 ? liczba1 : liczba3) : (liczba2 < liczba3 ? liczba2 : liczba3);

    printf("Najmniejsza liczba to: %d\n", najmniejsza);

    return 0;
}
