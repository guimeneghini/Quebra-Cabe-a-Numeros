#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>
#define N 3
#define ponto 9

bool matrizCerta(int matriz[N][N]){

    int cont=0, aux=1;

    for(int i=0; i<N; i++){

        for(int j=0; j<N; j++){

            if(matriz[i][j]==i+j+aux) cont++;
        }

        aux += (N-1);
    }
    
    if(cont==9) return true;
    else return false;
}