#include <stdio.h>

int main()
{

    int i, j, x, y;

    printf("Podaj parametr x i y\n");
    scanf("%d %d", &y, &x);

    for (j = 1; j <= x; j++)
    {
        for (i = 1; i <= y; i++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}