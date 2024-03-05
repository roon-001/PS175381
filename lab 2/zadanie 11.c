#include <stdio.h>
#include <stdlib.h>


int main() {
    float liczba1;
    float liczba2;

    printf("Podaj 1. liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj 2. liczbe: ");
    scanf("%f", &liczba2);

    (liczba1 > liczba2) ? printf("%.2f jest wieksze od %.2f\n", liczba1, liczba2) :
    ((liczba2 > liczba1) ? printf("%.2f jest wieksze od %.2f\n", liczba2, liczba1) :
    printf("%.2f i %.2f sa rowne\n", liczba1, liczba2));

    return 0;
}
