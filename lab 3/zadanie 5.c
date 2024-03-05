#include <stdio.h>
#include <stdlib.h>

int main() {
    int pierwsza = 0;
    int druga = 1;
    int nastepna = 0;
    int i = 0;

    printf("Pierwsze 10 liczb ciagu Fibonacciego:\n");

    // Używamy pętli while do wygenerowania pierwszych 10 liczb ciągu Fibonacciego
    while (i < 10) {
        if (i <= 1)
            nastepna = i;
        else {
            nastepna = pierwsza + druga;
            pierwsza = druga;
            druga = nastepna;
        }
        printf("%d\n", nastepna);
        i++;
    }

    return 0;
}


