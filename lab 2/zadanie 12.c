#include <stdio.h>
#include <stdlib.h>

int main() {
    int ocena;

    printf("Podaj ocene (skala od 0 do 100): ");
    scanf("%d", &ocena);

    (ocena >= 51) ? printf("Zdane\n") : printf("Nie zdane\n");

    return 0;
}
