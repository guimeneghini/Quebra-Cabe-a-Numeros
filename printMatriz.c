#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>
#define N 3
#define ponto 9

void printMatriz(int matriz[N][N]){

    for(int i=0; i<N; i++){

        for(int j=0; j<N; j++){

            if(matriz[i][j] == ponto) printf(".\t");
            
            else printf("%d\t", matriz[i][j]);
        }
        
        printf("\n");
    }
}