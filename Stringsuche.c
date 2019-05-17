#include <stdio.h>

char* suche (char *str, char *such, unsigned int n) {

	int laenge_str = 0;
	int laenge_such = 0;
	int zaehler = 0;
	int found = 0;
	int i,j;

	i = 0;
	while (*(str+i) != 0) {
		i++;
	}
	laenge_str = i;

	i = 0;
	while (*(such+i) != 0) {
		i++;
	}
	laenge_such = i;

	for(i = 0;i < laenge_str;i++) {
		if(*(str +i) == *such){
			for(j = 0; j < laenge_such; j++) {
				if (*(str +i+j) != *(such+j))
					break;
				else {
					if (j == laenge_such - 1)
						zaehler = zaehler + 1;
				}
			}
		}
		if (n == zaehler && n != 0) {
			found = i;
			break;
		}
	}

	if (found > 0)
		return (str+found);
	else
		return NULL;
}