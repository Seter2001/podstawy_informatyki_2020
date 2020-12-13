#include <stdio.h>

int main()
{
    float a, b, c;
    char znak, e, t = 't';

    do
    {

        printf("Podaj a znak b\n");
        scanf("%f %c %f", &a, &znak, &b);

        switch (znak)
        {
        case '+':
            printf("\n %.2f + %.2f = %.2f\n", a, b, a + b);
            break;

        case '-':
            printf("\n %.2f - %.2f = %.2f\n", a, b, a - b);
            break;

        case '*':
            printf("\n %.2f * %.2f = %.2f\n", a, b, a * b);
            break;

        case '/':
            printf("\n %.2f / %.2f = %.2f\n", a, b, a / b);
            break;

        case '%':
            printf("\n modulo = %d", (int)a % (int)b);
            break;

        default:
            printf("zly wybor");
            break;
        }
        printf("\nChcesz kontynuowac? t/n\n");
        scanf("%c", &e);

    } while (t == e);

    return 0;
}