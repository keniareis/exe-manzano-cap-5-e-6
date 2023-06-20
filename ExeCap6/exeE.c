/*e) Elaborar um programa que leia uma matriz A do tipo vetor
com 15 elementos inteiros. Construir uma matriz B de
mesmo tipo, e cada elemento da matriz B deve ser o
resultado da fatorial correspondente de cada elemento da
matriz A. Apresentar as matrizes A e B.*/

#include <stdio.h>

int main(){

    int a[15], b[15], i, fat;

    for ( i = 0; i < 15; i++){   
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &a[i]);
        
        fat = a[i];
        b[i]=1;
        while (fat>=1)
        {
            b[i] *= fat;
            fat--;
        }
    }
    
    printf("\n==Os elementos da matriz A sao:==\n");
    for ( i = 0; i < 15; i++){
        printf("%d ", a[i]);
    }
        printf("\n==Os elementos da matriz B sao:==\n");
    for ( i = 0; i < 15; i++){
        printf("%d ", b[i]);
    }
    return 0;
}