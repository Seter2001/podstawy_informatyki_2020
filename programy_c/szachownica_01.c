#include <stdio.h>

int main()
{

    int i, j, x, y, z = 0, q, v;

    printf("\nProgram tworzacy szachownice zero jedynkowa\n\n");
    printf("Podaj parametr x (szerokosc) i y (wysokosc)\n");
    scanf("%d %d", &x, &y);
    printf("\n");

    for (j = 1; j <= y; j++)
    {
        for (i = 1; i <= x; i++)
        {
            z++;
            q = (z % 2);
            if (q == 1)
            {
                printf("\t1");
            }
            else
                printf("\t0");
        }
        printf("\n\n\n\n");
        v = y % 2;
        if (v == 0)
        {
            z = z + 1;
        }
        else
            z = z;
    }
    printf("\n");
    return 0;
}