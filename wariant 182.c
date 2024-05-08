#include <stdio.h>
#include <stdlib.h>

void usuwanieDuzych(char txt[]){
    int i=0,j=0;
    while(txt[i]!=0){
        if(txt[i] < 'A' || txt[i] > 'Z'){
            txt[j] = txt[i];
            j++;
        }
        i++;
    }
    txt[j]=0;
}

int main()
{
    char napis[] = "ABCDefgH123";
    usuwanieDuzych(napis);
    printf("%s\n", napis);
    return 0;
}
