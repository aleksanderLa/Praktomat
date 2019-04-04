#include <stdio.h>

int main() {

int eingabe;

int i,j,k;

scanf("%d", &eingabe);

if (eingabe >= 3) {
	k = eingabe;
	for (i = 0; i < eingabe; i++)
	{
		for (j = 0; j < eingabe; j++)
		{
			if ((i == 0) || (i == eingabe - 1))
				printf("*");
			else if (j == (k - 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		k--;
	}
}

return 0;
}