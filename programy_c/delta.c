#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, d, p;

    printf("Podaj abc z rownania kwadratowego funkcji gdzie (ax^2+bx+c)\n");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;
    p = sqrt(d);

    if (d < 0)
    {
        printf("Delta mniejsza od zera, brak rozwiazan");
    }
    if (d == 0)
    {
        printf("Delta rowna zero, 1 rozwiazanie:");
        x1 = -b / (2 * a);
        printf("%f", x1);
    }
    if (d > 0)
    {
        printf("Delta wieksza od zera, 2 rozwiazania:");
        x1 = (-b - p) / (2 * a);
        x2 = (-b + p) / (2 * a);
        printf("%f", x1);
        printf("%f", x2);
    }
    return 0;
}