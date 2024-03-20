#include <stdio.h>
#include <stdlib.h>

void addValue(int valueToAdd, int *target){
    *target = valueToAdd + *target;
}

int main()
{
    int a = 10;
    int b = 3;
    printf("%d %d\n", a, b);
    addValue(a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
