#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>
#define N 3
#define ponto 9

void trocaMovimento(int matriz[N][N], int num, char mov){

    int troca, pos, pos2;
    
    if((int)mov==75){

        for(int i=0; i<N; i++){

            for(int j=0; j<N; j++){

                if(num==matriz[i][j]) pos=j, pos2=i;
            }
        }

        if(pos==0) printf("Movimento invalido.\n");

        else if(matriz[pos2][pos-1]!=ponto) printf("Movimento invalido.\n");

        else {

            troca=matriz[pos2][pos-1];
            matriz[pos2][pos-1]=num;
            matriz[pos2][pos]=troca;
        }

    }

     else if((int)mov==77){

        for(int i=0; i<N; i++){

            for(int j=0; j<N; j++){

                if(num==matriz[i][j]) pos=j, pos2=i;
                }
        }

        if(pos==2) printf("Movimento invalido.\n");

        else if(matriz[pos2][pos+1]!=ponto) printf("Movimento invalido.\n");

        else {

            troca=matriz[pos2][pos+1];
            matriz[pos2][pos+1]=num;
            matriz[pos2][pos]=troca;
        }
    }

    else if((int)mov==72){

        for(int i=0; i<N; i++){

            for(int j=0; j<N; j++){

                if(num==matriz[i][j]) pos=i, pos2=j;
            }
        }

        if(pos==0) printf("Movimento invalido.\n");

        else if(matriz[pos-1][pos2]!=ponto) printf("Movimento invalido.\n");

        else {

            troca=matriz[pos-1][pos2];
            matriz[pos-1][pos2]=num;
            matriz[pos][pos2]=troca;
        }
    }

    else if((int)mov==80){

        for(int i=0; i<N; i++){

            for(int j=0; j<N; j++){

                 if(num==matriz[i][j]) pos=i, pos2=j;
            }
        }

        if(pos==2) printf("Movimento invalido.\n");

        else if(matriz[pos+1][pos2]!=ponto) printf("Movimento invalido.\n");

        else {

            troca=matriz[pos+1][pos2];
            matriz[pos+1][pos2]=num;
            matriz[pos][pos2]=troca;
        }
    }
}