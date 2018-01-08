#include <stdio.h>
#include <math.h>

int main()
{
	int lati;
	printf("\n I poligoni regolari \n\n"
		   "---------------------------\n"
		   "Quanti lati ha il poligono?\n"
		   "---------------------------\n");
	scanf("%d", &lati);
	if (lati == 3)
	{
		int decision;
		printf("\n I triangoli regolari \n"
 			   " --------------------\n\n"
		   	   "\n 1  -  Calcolo dell'area (date base e altezza) \n\n"
		       "\n 2  -  Calcolo dell'area (dati 2 lati e l'angolo compreso) \n\n"
		       "\n 3  -  Calcolo del perimetro \n\n");
		scanf("%d", &decision);

		if (decision == 1)
		{
		float base, altezza, area;
		printf("\n Area del triangolo date base e altezza \n");
		printf(" -------------------------------------- \n\n" );
		printf("Quanto è lunga la base? \n");
		scanf ("%f", &base);
		printf("Quanto è lunga l'altezza? \n");
		scanf("%f", &altezza);
		printf("\n     Base            Altezza           Area\n\n");
		area= base * altezza / 2;
		printf("%8.1f        %10.1f       %10.2f\n\n", base, altezza, area );
		return 0;
		}
		

		else if (decision == 2)
		{
		float base, altezza, area, angolo;
		printf("\n Area del triangolo dati 2 lati e l'angolo compreso\n");
		printf(" -------------------------------------------------- \n\n" );
		printf("Quanto è lungo il primo lato? \n");
		scanf ("%f", &base);
		printf("Quanto è lungo il secondo lato? \n");
		scanf("%f", &altezza);
		printf("Quanto è ampio l'angolo compreso?");
		scanf("%f", &angolo);
		printf("\n     Lato 1           Lato 2         Angolo		Area\n\n");
		area= (base * altezza * sin(angolo/180*3.1415926535)/2);
		printf("%8.1f        %10.1f       %10.2f	   %10.1f\n\n", base, altezza, angolo, area );
		return 0;
		}
		

		else (decision == 3);
		{
		float base, altezza, perimetro;
		printf("\n Perimetro del triangolo\n");
		printf(" ----------------------- \n\n" );
		printf("Quanto è lunga la base? \n");
		scanf ("%f", &base);
		printf("Quanto è lungo il lato? \n");
		scanf("%f", &altezza);
		printf("\n     Base            Lato           Perimetro\n\n");
		perimetro= base + altezza*2; 
		printf("%8.1f        %10.1f       %10.2f\n\n", base, altezza, perimetro);
		return 0;
		}
		
	}
	else if (lati == 4)
	{
		int decision;
		printf("\n Il rettangolo\n"
			   " -------------\n\n"
		       "\n 1  -  Calcolo dell'area \n\n"
		       "\n 2  -  Calcolo del perimetro \n\n"
		       "\n 3  -  Calcolo della diagonale \n\n");
		scanf("%d", &decision);

		if (decision == 1)
		{
		float base, altezza, area;
		printf("\n Area del rettangolo\n");
		printf(" ------------------- \n\n" );
		printf("Quanto è lunga la base? \n");
		scanf ("%f", &base);
		printf("Quanto è lunga l'altezza? \n");
		scanf("%f", &altezza);
		printf("\n     Base            Altezza           Area\n\n");
		area= base * altezza;
		printf("%8.1f        %10.1f       %10.2f\n\n", base, altezza, area );
		return 0;
		}
		
		else if (decision == 2)
		{
		float base, altezza, perimetro;
		printf("\n Perimetro del rettangolo\n");
		printf(" ------------------------ \n\n" );
		printf("Quanto è lunga la base? \n");
		scanf ("%f", &base);
		printf("Quanto è lunga l'altezza? \n");
		scanf("%f", &altezza);
		printf("\n     Base            Altezza         Perimetro\n\n");
		perimetro= (base + altezza)*2;
		printf("%8.1f        %10.1f       %10.2f\n\n", base, altezza, perimetro );
		return 0;
		}

		else (decision == 3);
		{
		float base, altezza, diagonale;
		printf("\n Diagonale del rettangolo\n");
		printf(" ------------------------ \n\n" );
		printf("Quanto è lunga la base? \n");
		scanf ("%f", &base);
		printf("Quanto è lunga l'altezza? \n");
		scanf("%f", &altezza);
		printf("\n     Base            Altezza         Diagonale\n\n");
		diagonale = sqrt (base * base + altezza * altezza); 
		printf("%8.1f        %10.1f       %10.2f\n\n", base, altezza, diagonale );
		return 0;
		}
	}
	else if (lati > 4)
	{
		int decision;
		printf("\n I poligoni a %d lati \n", lati);
		printf(" -------------------\n\n"
			   "\n 1  -  Calcolo dell'area \n\n"
		   	   "\n 2  -  Calcolo del perimetro \n\n"
		       "\n 3  -  Calcolo dell'apotema \n\n"
			   "\n 4  -  Calcolo del numero fisso \n\n"
			   "\n 5  -  Calcolo della costante d'area \n\n");
		scanf("%d", &decision);

		if (decision == 1)
		{
		float base, area, apotema;
		printf("\n Area del poligono a %d lati \n", lati);
		printf(" -------------------------- \n\n" );
		printf("Quanto è lungo il lato? \n");
		scanf ("%f", &base);
		apotema= base * cos(3.1415926535 / lati)/sin(3.1415926535 / lati) /2 ;
		printf("\n     Lato            Apotema           Area\n\n");
		area= base * apotema * lati / 2;
		printf("%8.1f        %10.5f       %10.2f\n\n", base, apotema, area );
		return 0;
		}

		else if (decision == 2)
		{
		float base, perimetro;
		printf("\n Perimetro del poligono a %d lati \n", lati);
		printf("-------------------------------- \n" );
		printf("Quanto è lungo il lato? \n");
		scanf ("%f", &base);
		printf("Quanto è lunga l'altezza? \n");
		printf("\n     Lato           Perimetro\n\n");
		perimetro= base * lati;
		printf("%8.1f       %10.2f\n\n", base, perimetro );
		return 0;
		}

		else if (decision == 3)
		{
		float base, apotema;
		printf("\n Apotema del poligono a %d lati \n", lati);
		printf(" ------------------------------ \n" );
		printf("Quanto è lungo il lato? \n");
		scanf ("%f", &base);
		printf("\n      Lato         Apotema\n\n");
		apotema= base * cos(3.1415926535 / lati)/sin(3.1415926535 / lati) /2 ;
		printf("%8.1f       %10.2f\n\n", base, apotema );
		return 0;
		}

		else if (decision == 4)
		{
		float base, fisso;
		base = 1;
		printf("\n Numero fisso del poligono a %d lati \n", lati);
		printf(" ----------------------------------- \n" );
		printf("\n   Numero fisso\n\n");
		fisso = cos(3.1415926535 / lati)/sin(3.1415926535 / lati) /2;
		printf("%10.3f\n\n", fisso );
		return 0;
		}

		else (decision == 5);
		{
			float base, cost;
			base = 1;
			printf("\n Costante d'area del poligono a %d lati \n", lati);
		    printf(" ------------------------------------- \n" );
		    printf("\n   Costante d'area\n\n");
		    cost= cos(3.1415926535 / lati)/sin(3.1415926535 / lati) /2;
			printf("%10.3f\n\n", cost );
		    return 0;
		}
	}
	return 0;
}