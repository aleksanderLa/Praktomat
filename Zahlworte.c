void zahlworte(int zahl, char *array) {

    int anzahl =0;
    int temp = 0;
    int i = 0;
    int zwischenspeicher[10];

    if (zahl < 0) {
            *array = 'm';
        *(array+1) = 'i';
        *(array+2) = 'n';
        *(array+3) = 'u';
        *(array+4) = 's';
        *(array+5) = 32;
        zahl = zahl * (-1);
        array = array + 6;
    }

    temp = zahl;

	while(temp > 0)
	{
		temp /= 10;
		anzahl++;
	}

	if (zahl == 0)
        anzahl = 1;

    for(i= anzahl-1; i >= 0; i--){

        zwischenspeicher[i]= zahl%10;
        zahl = zahl/10;
    }

    for(i = 0; i < anzahl; i++) {


        switch (zwischenspeicher[i]) {

            case 0:
                    *array = 'n';
                *(array+1) = 'u';
                *(array+2) = 'l';
                *(array+3) = 'l';
                array = (array + 4);
                break;

            case 1:
                    *array = 'e';
                *(array+1) = 'i';
                *(array+2) = 'n';
                *(array+3) = 's';
                array = (array + 4);
                break;

            case 2:
                    *array = 'z';
                *(array+1) = 'w';
                *(array+2) = 'e';
                *(array+3) = 'i';
                array = (array + 4);
                break;

            case 3:
                    *array = 'd';
                *(array+1) = 'r';
                *(array+2) = 'e';
                *(array+3) = 'i';
                array = (array + 4);
                break;

            case 4:
                    *array = 'v';
                *(array+1) = 'i';
                *(array+2) = 'e';
                *(array+3) = 'r';
                array = (array + 4);
                break;

            case 5:
                    *array = 'f';
				*(array+1) = 252; // ü lässt sich ned darstellen -.-
				*(array+2) = 'n';
                *(array+3) = 'f';
                array = (array + 4);
                break;

            case 6:
                    *array = 's';
                *(array+1) = 'e';
                *(array+2) = 'c';
                *(array+3) = 'h';
                *(array+4) = 's';
                array = (array + 5);
                break;

            case 7:
                    *array = 's';
                *(array+1) = 'i';
                *(array+2) = 'e';
                *(array+3) = 'b';
                *(array+4) = 'e';
                *(array+5) = 'n';
                array = (array + 6);
                break;

            case 8:
                    *array = 'a';
                *(array+1) = 'c';
                *(array+2) = 'h';
                *(array+3) = 't';
                array = (array + 4);
                break;

            case 9:
                    *array = 'n';
                *(array+1) = 'e';
                *(array+2) = 'u';
                *(array+3) = 'n';
                array = (array + 4);
                break;

            default:
                break;
            }
        if (i == anzahl - 1)
            break;
        *array = 32;
        array = (array+1);
    }
    *array = 0;
}
