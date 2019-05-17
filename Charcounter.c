#include <stdio.h>
#include <stdlib.h>
#define LAENGE 26

int main(int argc, char *argv[])
{
    char buchstabe[LAENGE];
    int anzahl[LAENGE];
    int i,j,k;
    int laenge;

    for (i = 0;i < LAENGE; i++) {																// Initialisieren
        buchstabe[i] = 'A' + i;
        anzahl[i] = 0;
    }

    for (i = 1;i < argc; i++) {																	// 1.Element weglassen
        j = 0;
        laenge = 0;

        while (*(argv[i]+j) != 0) {																// Laenge anschauen jedes übergebenen Strings
            laenge += 1;
            j++;
        }

        for (j = 0; j < laenge; j++ ) {															// einsortieren in Buchstabenarray
            for(k = 0; k < LAENGE; k++) {														// jeden Buchstaben des Alphabets prüfen
			
                if (buchstabe[k] == *(argv[i]+j) || (buchstabe[k] + 32) == *(argv[i]+j)) {		// Wenn Buchstabe mit Alphabet übereinstimmt egal ob großschrift oder kleinschrift
                    anzahl[k] += 1;																// dann erhöhe Anzahl
                }
            }
        }
    }

    for(i = 0;i < LAENGE; i++) {
        if (anzahl[i] > 0)																		// Printe nur Elemente deren Anzahl > 0
            printf("%c:%d\n",buchstabe[i],anzahl[i]);
    }
    return 0;
}
