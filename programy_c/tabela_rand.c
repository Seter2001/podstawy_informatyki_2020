#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i, x, z, tab[10];

    z = time(NULL);

    srand(z);
    for (i = 0; i < 10; i++)
    {
        tab[i] = rand() % 100;
        printf("%d. liiczba pseudolosowa to %d\n", i, tab[i]);
    }

    x = tab[0];

    for (i = 1; i < 10; i++)
    {
        if (tab[i] > x)
        {
            x = tab[i];
        }
    }

    printf("\n\nNajwieksza liczba to %d\n\n", x);
    return 0;
}