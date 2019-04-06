#include <stdio.h>

int main()
{   
    int start = 33;
    int ende = 126;
    
    int spalten = 2;
	int zeilen = (ende - start) / spalten + 1;

	int z,s,wert;
	
	for (z = 0;z < zeilen; z++) {
		
		wert = start + z;
		
		for (s = 0; s < spalten; s++) {
			if (wert + zeilen * s <= ende)
				printf("%3d : %3c | ",wert + zeilen * s,wert + zeilen * s);		
		}
		
		printf("\n");
	}
    
    return 0;
}