#include <stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	if (((a == 10) && (b ==10)) || (a == 10) || (b == 10) || ((a + b) == 10))
		printf("Makes 10!");

	return 0;
}
