#include <stdio.h>
#include <stdlib.h>

int main()
{
	char z[] = "Ala ma kota";
	int i;
	for (i = 0; i < 11; i++)
	{
		if (z[i] != 32)
		{
			if (z[i] > 96 && z[i] < 123)
				z[i] = z[i] - 32;
			i++;
		}
		if (z[i] == 32)
		{
			i++;
		}
	}

	for (i = 0; i < 11; i++)
	{
		printf("%c", z[i]);
	}

	return 0;
}
