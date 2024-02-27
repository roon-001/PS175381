### zadanie 1
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;

    printf("podaj liczbe: ");
    scanf("%d", &liczba);
    printf("wprowadzona liczba to: %d", liczba);

    return 0;
}
```

### zadanie 2
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float liczba1;
  float liczba2;

  printf("podaj pierwsza liczbe zmiennoprzecinkowa ");
  scanf("%f", &liczba1);
  printf("podaj druga liczbe zmiennoprzecinkowa ");
  scanf("%f", &liczba2);

  printf("roznicza liczb zmiennoprzecinkowych: %f", liczba1 - liczba2);

  return 0;

}
```

### zadanie 3
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok_urodzenia;

    printf("podaj rok urodzenia: ");
    scanf("%d", &rok_urodzenia);
    printf("Nowy rok urodzenia po odjeciu jednego roku: %d", rok_urodzenia - 1);

    return 0;
}
```
### zadanie 4
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("podaj trzy liczby: \n");
    int liczba1;
    int liczba2;
    int liczba3;

    float srednia;

    scanf("%d", &liczba1);
    scanf("%d", &liczba2);
    scanf("%d", &liczba3);

    srednia = (float)(liczba1 + liczba2 + liczba3) / 3;

    printf("srednia trzech liczb: %f", srednia);

    return 0;
}
```
### zadanie 5
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char znak1;
    char znak2;

    printf("podaj 2 litery: ");
    scanf("%c", &znak1);
    scanf("%c", &znak2);

    printf("odwrocone 2 litery: ");
    printf("%c", znak2);
    printf("%c", znak1);

    return 0;
}
```
### zadanie 6
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float liczba;

    printf("podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &liczba);
    printf("liczba zmiennoprzecinkowa razy 2: %f", liczba*2);

    return 0;
}
```
### zadanie 7
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float liczba;

    printf("podaj kwote w dolarach: ");
    scanf("%f", &liczba);
    printf("twoje dolary w euro: %.2f", liczba*0.85);

    return 0;
}
```
###zadanie 8
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("To jest cytat: \"Czesto uzywam jezyka C.\"\n");
    return 0;
}
```
### zadanie 9
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("C:\\Programy Files\\MojaAplikacja\\\n");
    printf("C:\\\\Programy Files\\\\MojaAplikacja\\\\\n");

    return 0;
}
```
### zadanie 10
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Speacjalne znaki: \\t (tabulacja), \\n (nowa linia),  %%(procent), \\\\ (ukosnik wsteczny)\n");
    return 0;
}
```
zadanie 11
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a;
    float b;

    printf("podaj dlugosc 1. boku: ");
    scanf("%f", &a);
    printf("podaj dlugosc 2. boku: ");
    scanf("%f", &b);

    printf("dlugosc przeciwprostokatnej: %.2f", sqrt(a*a + b*b ));

    return 0;
}
```
### zadanie 12
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int liczba;

    printf("podaj liczbe: ");
    scanf("%d", &liczba);

    printf("wartosc bezwzgledna: %d", abs(liczba));

    return 0;
}
```
### zadanie 13
```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float liczba;

    printf("podaj liczbe: ");
    scanf("%f", &liczba);

    printf("wartosc bezwzgledna: %f", fabs(liczba));

    return 0;
}
```
### zadanie 14
Tutaj nie wiedziałem jak do tego podejść. 
