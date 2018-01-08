#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a, r, n, f; //a = variabile di scelta, r = numero random, n = numero di lanci, f = numero di facce
static int c = 0; // c = somma dei numeri
int b = 0; // b = numero inserito manualmente

void exit();

int uno()
{
	puts("");
	scanf("%d", &b);
	c = c + b;
	return c;
}

int due()
{
	puts("\nQuanti lanci vuoi fare?\n");
	scanf("%d", &n);
	puts("");

	for (int i = 0; i < n; ++i)
	{
		printf("Lancio %d, inserire il numero di facce del dado:\n\n", i+1);
		scanf("%d", &f);
		puts("");
		r = rand()% f;
		c = c + r + 1;
	}
	
	return c;
}

void tre ()
{
	printf("\n**************************\nLa somma dei valori è: %d\n**************************\n\n", c);
}

void quattro()
{
	printf("\n**************************\nLa somma dei valori è: %d\n**************************\n\n", c);
	exit(1);
}

int main ()
{
	time_t t;
	srand((unsigned) time(&t));
	
	do
	{
		puts("\nScegliere se:\n\n1) Inserire valore (e sommare al precedente)\n\n2) Tirare un dado (e sommare al precedente)\n\n3) Mostrare il risultato\n\n4) Termina il programma\n\n");
		scanf("%1d", &a);

		switch (a)
		{
			case 1:
			uno();
			break;

			case 2:
			due();
			break;

			case 3:
			tre();
			break;

			case 4:
			quattro();
			break;
		}
	}

	while (a != 4);

}