#include <stdio.h>

int main()
{

    long long int i, s = 1, x;
    printf("\nPodaj stopien silni\n");
    scanf("%lld", &x);
    printf("\n");

    for (i = 1; i <= x; i++)
    {
        s = s * i;
        printf("%lld\n", s);
    }
    printf("\n");
    return 0;
}