//PTSNJH EFOJH RFR UQZXF

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char z[] = "PTSNJH EFOJH RFR UQZXF";
	int i = 1;
	int j;
	int k;
	int l;

	for (j = 1; i <= 26; i++)
	{
		for (j = 0; j < 22; j++)
		{
			if (z[j] != 32)
			{
				if (z[j] + i <= 90)
					z[j] = z[j] + i;
				else
				{
					l = z[j] + i - 90;
					z[j] = 64 + l;
				}
			}
		}

		for (k = 0; k < 22; k++)
		{
			printf("%c", z[k]);
		}
		printf("\n");
	}
}
