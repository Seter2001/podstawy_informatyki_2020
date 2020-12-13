#include <stdio.h>

int main()
{

    int x, i=1, j;
    long long int s = 1;
    printf("\nProgram liczacy silnie do 20 stopnia\n");
    printf("\nPodaj stopien silni\n");
    scanf("%d", &x);

    if (x >= 20)
    {  
        x=20;
        printf("\nPodana silnia jest zbyt duza, program moze liczyc silnie do 20 stopnia:\n\n");
    }
    else
    {
        printf("\nOto silnia z liczby %d", x);
        printf("\n\n");

    }
    j=x-1;
    do
    {
        s = s * i;
        printf("%d", i);
        printf("! = ");
        printf("%lld\n", s);
        i++;
        j--;
    } while (j >= 0);
    
    printf("\n");
    return 0;
}