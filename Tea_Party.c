#include <stdio.h>

int how_successful(int tea, int candy) {
	int party = 0;

	if (tea >= 5)
		if (candy >= 5)
		party = 1;

	if (tea >= 2 * candy)
		party = 2;

	if (candy >= 2 * tea)
		party = 2;

	if (tea < 5)
		party = 0;

	if (candy < 5)
		party = 0;

	return party;
}

int main(void) {
	int tea;
	int candy;
	int party = 0;

	scanf("%d %d", &tea, &candy);

	party = how_successful(tea, candy);

	if (party == 0)
		printf("bad");
	else if (party == 1)
		printf("good");
	else
		printf("great");

	return 0;
}

