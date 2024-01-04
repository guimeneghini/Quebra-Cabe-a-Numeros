#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>

#define N 3
#define ponto 9

#include "geraMatrizAleatoria.c"
#include "matrizCerta.c"
#include "printMatriz.c"
#include "trocaMovimento.c"

int main(){

    int matriz[N][N];
    int num;
    char mov;
    bool auxBool;

    srand(time(NULL));

    geraMatrizAleatoria(matriz);

    printf("\nO jogo comecou!\n");
    
    for(int i=0; i<N; i++){

        for(int j=0; j<N; j++){

            if(matriz[i][j] == ponto) printf(".\t");
            
            else printf("%d\t", matriz[i][j]);
        }
        
        printf("\n");
    }

    do {

        printf("\nQual numero deseja mover?\n");

        scanf("%d", &num);

        fflush(stdin);

        printf("Qual movimento deseja fazer?\n");

        mov=getch();

        if((int)mov==77 || (int)mov==75 || (int)mov==72 || (int)mov==80);
        else mov=getch();

        if(num>=1 && num<=8){

            trocaMovimento(matriz, num, mov);

        } else {

            printf("Opcao invalida.\n");
        }

        auxBool=matrizCerta(matriz);

        printMatriz(matriz);

    } while(auxBool==false);

    printf("\n\nFIM DE JOGO!\nPARABENS, VOCE VENCEU!!!\n");

    return 0;
}