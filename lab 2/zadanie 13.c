#include <stdio.h>
#include <stdlib.h>

int main() {
    int rok;

    printf("Podaj rok: ");
    scanf("%d", &rok);

    (rok % 4 == 0 && (rok % 100 != 0 || rok % 400 == 0)) ? printf("Rok przestepny\n") : printf("Rok nieprzestepny\n");

    return 0;
}
