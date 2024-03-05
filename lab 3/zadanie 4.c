#include <stdio.h>
#include <stdlib.h>

int main() {
    int liczba;
    int silnia = 1;

    printf("Podaj liczbe : ");
    scanf("%d", &liczba);

    if (liczba < 0) {
        printf("liczba nie moze byc ujemna");
    }
    else
    {
        for (int i = 1; i <= liczba; ++i) {
            silnia *= i;
        }

        printf("Silnia z %d to %llu\n", liczba, silnia);
    }

    return 0;
}


