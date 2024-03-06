#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int licznik = 1;
    int i = 0;

    printf("podaj liczbe: ");
    scanf("%d", &n);

    if(n>0)
    {
        for(i=n; i<=2*n; i++) {
            if (i%3 == 0)
            {
                licznik = licznik*i;
            }
        }
    printf("%d", licznik);
    
    }
    if(n<0)
    {
        printf("podano liczbe ujemna");
    }
    return 0;
}


// 9 do 18 = 9*12*15*18 = 29160
