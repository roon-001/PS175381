#include <stdio.h>
#include <stdlib.h>
//drugi argument w funkcji jest potrzebny do petli by przejsc przez tablice

sum_positive_elements(int arr[], int roz){
    int suma=0;
    for(int i=0; i<roz; i++){
        if (arr[i] > 0){
            suma += arr[i];
        }
    }
    return suma;
}

int main()
{
    int arr[] = {1,-2,-3,4,5};
    int roz = 5;
    printf("%d", sum_positive_elements(arr, roz));
    return 0;
}
