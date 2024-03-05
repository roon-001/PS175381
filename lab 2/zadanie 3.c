#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ocena;

    printf("podaj ocene od 1 do 5: ");
    scanf("%d", &ocena);

    if(ocena==1) {
        printf("1 - niedostateczny");
    }

    if(ocena==2) {
        printf("2 - dopuszczajacy");
    }

    if(ocena==3) {
        printf("3 - dostateczny");
    }

    if(ocena==4) {
        printf("4 - dobry");
    }

    if(ocena==5) {
        printf("5 - bardzo dobry");
    }

    if(ocena>5) {
        printf("podano ocene spoza zakresu");
    }
}
