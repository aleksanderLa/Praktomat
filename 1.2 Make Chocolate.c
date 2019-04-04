#include <stdio.h>

int main() {
	int small_bars;
	int big_bars;
	int goal;
	int used_small_bars = -1;

	scanf("%d %d %d", &small_bars, &big_bars, &goal);

	int rest = 0;

	if (goal > (big_bars * 5))
		rest = goal - big_bars * 5;
	else
		rest = goal;

	if (small_bars >= rest)
		used_small_bars = rest;
	else if (small_bars == 0)
		used_small_bars = 0;
	else
		used_small_bars = -1;

	printf("%d", used_small_bars);

	return 0;
}
