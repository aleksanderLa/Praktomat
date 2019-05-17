void betrag(int *zahl) {
	if (*zahl < 0) {
		*zahl *= -1;
	}
}

void sort(int *a, int *b) {
	int temp;
	if (*a > *b) {
		temp = *b;
		*b = *a;
		*a = temp;
	}
}

void runde_summe(int *a, int *b, int *c, int *summe) {

	int rest = 0;
	betrag(a);
	betrag(b);
	betrag(c);

	sort(a,b);
	sort(b,c);
	sort(a,b);

	*summe = *a + *b + *c;

	if (*summe < 10) {
		*summe = 10;
	}
	else {
		rest = *summe % 10;

		if ( rest < 5 )
			*summe = *summe - rest;
		else
			*summe = *summe + (10 - rest);
	}
}