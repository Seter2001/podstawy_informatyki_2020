#include <stdio.h>

int main()
{

    int i, s = 1;
    for (i = 1; i <= 5; i++)
    {
        s = s * i;
        printf("\n%d", s);
    }
    printf("\n\n");
    return 0;
}