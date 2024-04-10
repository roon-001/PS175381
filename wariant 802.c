#include <stdio.h>
#include <stdlib.h>

int znaki(char txt[]){
    int licznik = 0;
    for (int i=0; txt[i] !=0; i++){
        if(txt[i] >= 'A' && txt[i] <= 'Z'){
            licznik += 1;
        }
    }
    return licznik;
}

int main()
{
    char txt[] = "ABcdef";
    printf("%d\n", znaki(txt));
    return 0;
}



