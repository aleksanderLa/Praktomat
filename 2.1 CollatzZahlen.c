#include <stdio.h>

int main() {

int n,count = 1;

scanf("%d", &n);

if (n > 1) {
	while ( n != 1) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
		count++;
	}
	printf("%d",count);
}
else
	printf("0");
return 0;
}