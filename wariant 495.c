#include <stdio.h>
#include <stdlib.h>

struct Building {
    char * name;
    int floors;
};



int NajwiekszaLiczbaPieter(struct Building tab[], int n){
    int temp = tab[0].floors;
    for(int i=1; i<n; i++){
        if(tab[i].floors > temp){
            temp = tab[i].floors;
        }
    }
    return temp;
}



int main()
{
    struct Building tab[] = {
    {"budynek1", 5},
    {"budynek2", 10},
    {"budynek3", 15}

    };

    printf("%d", NajwiekszaLiczbaPieter(tab, 3) );
}
