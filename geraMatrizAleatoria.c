#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>

#define N 3
#define ponto 9

void geraMatrizAleatoria(int matriz[N][N]){
    
    int aux=1;
    
    for(int i=0; i<N; i++){

        for(int j=0; j<N; j++){

            matriz[i][j] = i+j+aux;
        }

        aux += (N-1);
    }
    
    for(int i=0; i<N; i++){

        for(int j=0; j<N; j++){

            int k = rand()%N;
            int l = rand()%N;
            int temp = matriz[i][j];
            matriz[i][j] = matriz[k][l];
            matriz[k][l] = temp;
        }
    }
}