#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i, j, z, tab[10][10];

    z = time(NULL);

    srand(z);
    printf("\n");

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10; i++)
        {
            tab[j][i] = rand() % 100;
            printf("%d\t", tab[j][i]);
        }
        printf("\n\n");
    }

    printf("Oto wartosci na przekatnej tablicy: ");
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10; i++)
        {
            if (i == j)
            {
                printf("%d, ", tab[j][i]);
            }
        }
    }

    printf("\n\n");
    return 0;
}