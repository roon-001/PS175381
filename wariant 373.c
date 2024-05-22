#include <stdio.h>
#include <stdlib.h>

struct Apartment{
    char * address;
    char owner[100];
    int rooms;
    int isOccupied;
};



int main()
{
    struct Apartment tab[] = {
        { "iksowa", "Darek", 5, 1},
        { "igrekowa", "Maciek", 4, 0}
    };
    return 0;
}






