#include <stdio.h>

int main() {
  int count = 0;
  int num;

  scanf("%d", &num);

  while ((num != 1) && (num > 0)) {
	num /= 2;
	count++;
  }

  printf("%d", count);

  return 0;
}
