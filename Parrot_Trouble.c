#include <stdio.h>

int parrot_trouble(int talking, int hour) {
	if (talking == 1) {
		if ( hour < 7 || hour > 20 )
			return 1;
		else
			return 0;
	} else {
		return 0;
	}
}

int main(void) {
	int input_talking;
	int input_hour;

	scanf("%d %d", &input_talking, &input_hour);

	if (parrot_trouble(input_talking, input_hour))
		printf("Oh no, parrot in trouble!");
	else
		printf("Everything's fine.");

	return 0;
}
