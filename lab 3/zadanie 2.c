#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int suma = 0;
    int i = 1;

    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i;
        i++;
    }

    printf("Suma liczb od 1 do %d wynosi: %d\n", n, suma);

    return 0;
}
