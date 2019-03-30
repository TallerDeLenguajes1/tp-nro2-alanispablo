/*
 ============================================================================
 Name        : TP2_3.c
 Author      : Alanis Pablo Augusto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

int main(void){
	int m,n,contar, i=0;
	int** mt;
	int * arre = (int*) malloc(sizeof(int)*15);
	mt = (int **) malloc(sizeof(int*)*N);
	srand(time(NULL));
	for (m = 0; m < N; ++m)
	{
		contar = 0;
		int num= rand() % 11 + 5;
		mt[m] = (int *) malloc(sizeof(int) * (num));
		for (n = 0; n < num; ++n)
		{
			mt[m][n] = rand() % 900 + 100;
			printf("%d  ", mt[m][n]);
			if ((mt[m][n]%2)==0)
			{
				contar++;
			}
		}
		arre[m] = contar;
		printf("\n");
	}
	printf("\nCantidad de pares por fila:");
		while(i<N)
			{
				printf("%d  ", arre[i]);
				++i;
			}return 0;
}
