/*
 ============================================================================
 Name        : TP2_1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main(void){
	int f,c;
	double mt[N][M];
	setvbuf(stdout, NULL, _IONBF, 0);

	for(f=0;f<N;f++){
		for(c=0;c<M;c++){
			printf("Ingrese un numero para mt[%d][%d]: ",f,c);
			scanf("%lf", &mt[f][c]);
		}
	}
	for(f=0;f<N;f++){
		for(c=0;c<M;c++){
			printf("%lf", mt[f][c]);
		}
		printf("\n");
	}
	return 0;
}
