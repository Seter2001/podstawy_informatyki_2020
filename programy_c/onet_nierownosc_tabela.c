#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tab[10][10], i, j, z, a, b, c, d;
    z = time(NULL);
    srand(z);

    printf("\nTabela 10x10:\n\n");

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10; i++)
        {
            tab[j][i] = rand() % 100;
            printf("%d\t", tab[j][i]);
        }
        printf("\n\n\n");
    }

    printf("\nWspolrzedne punktow dla ktorych zachodzi nierownosc [i j]:\n\n");

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10; i++)
        {
            if (i > 0)
                a = i - 1;
            else
                a = 9;

            if (i < 9)
                b = i + 1;
            else
                b = 0;

            if (j > 0)
                c = j - 1;
            else
                c = 9;

            if (j < 9)
                d = j + 1;
            else
                d = 0;

            if (tab[a][i] + tab[b][i] > tab[j][i] && tab[j][c] + tab[j][d] < tab[j][i])
                printf("%d %d \n", j, i);

            else if (tab[a][i] + tab[b][i] < tab[j][i] && tab[j][c] + tab[j][d] > tab[j][i])
                printf("%d %d \n", j, i);
        }
    }

    printf("\n");
    return 0;
}