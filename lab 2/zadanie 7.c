#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;

    float delta;

    float x1;
    float x2;

    printf("podaj wspolczynnik a: ");
    scanf("%f", &a);
    printf("podaj wspolczynnik b: ");
    scanf("%f", &b);
    printf("podaj wspolczynnik c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("rownanie kwadratowe ma dwa rozwiazania: x1 = %.2lf i x2 = %.2lf\n", x1, x2);
    }

    if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("rownanie kwadratowe ma jedno rozwiazanie: x1 = %.2lf\n", x1);
    }

    if (delta < 0)
    {
        printf("delta ujemna - brak rozwiazania w zbiorze liczb rzeczywistych");
    }

    return 0;
}
