#include <stdio.h>
#include <stdlib.h>

int main() {
    int liczba;
    int dodatnie = 0;
    int ujemne = 0;

    do {
        printf("Podawaj liczby (0 konczy konczy dodawanie liczb): ");
        scanf("%d", &liczba);

        if (liczba > 0) {
            dodatnie += liczba;
        } else if (liczba < 0) {
            ujemne += liczba;
        }
    } while (liczba != 0);

    printf("Suma liczb dodatnich: %d\n", dodatnie);
    printf("Suma liczb ujemnnych: %d\n", ujemne);

    return 0;
}

