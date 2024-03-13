#include <stdio.h>
#include <stdlib.h>

int funkcja(int a, int b){
    if((a + b)%2 == 0){
        printf("0\n");
    }
    else{
        printf("1\n");
    }
}
int main()
{
    funkcja(1, 2);
    funkcja(2, 2);
    funkcja(3, 3);
    funkcja(1, 4);
}
