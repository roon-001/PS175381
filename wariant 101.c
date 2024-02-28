#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    printf("%f",(1/a)+(1/(b+c)));

    return 0;
}
