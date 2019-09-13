#include <stdio.h>
#include <stdlib.h>
//Um bool, true und false zu verwenden
#include <stdbool.h>

int main(int argc, char** argv)
{
	int zuZerlegendeZahl, i = 0, teiler = 2, anzahl = 0;
	bool istErsterTeiler = true;

	printf_s("Bitte geben sie eine ganze Zahl ein: ");
	scanf_s("%d", &zuZerlegendeZahl);

	printf_s("%d = ", zuZerlegendeZahl);

	while (i != 1)
	{
		while (zuZerlegendeZahl % teiler != 0)
		{
			teiler++;

			//Bei einem neuen Primfaktor fängt die Anzahl von neuem an zu zählen
			anzahl = 1;
		}

		while (zuZerlegendeZahl % teiler == 0)
		{
			zuZerlegendeZahl = zuZerlegendeZahl / teiler;
			anzahl++;
			
			//Diese Abfrage dient dazu den ersten Teiler optisch anders darzustellen als alle folgenden teiler
			if (istErsterTeiler)
			{
				printf("%d ", teiler);
				istErsterTeiler = false;
			}
			else
			{
				printf("x %d ", teiler);
			}
		}

		//Falls die 'zuZerlegendeZahl' kleiner als 'teiler' ist, kann die Zahl nicht mehr zerlegt werden
		if (zuZerlegendeZahl < teiler)
		{
			i = 1;
		}
		else
		{
			i = 0;
		}
	}

	return 0;
}