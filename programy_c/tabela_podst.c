#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, tab[10];
    tab[0] = 123;
    tab[3] = 34;

    printf("1 element to %d \n", tab[0]);

    for (i = 0; i < 10; i++)
    {
        tab[i] = i * i;
    }

    printf("");
    return 0;
}