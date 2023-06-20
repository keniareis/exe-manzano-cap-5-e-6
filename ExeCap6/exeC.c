/*c) Escrever um programa que leia duas matrizes
(denominadas A e B) do tipo vetor com 20 elementos reais.
Construir uma matriz C, sendo cada elemento da matriz C a
subtração de um elemento correspondente da matriz A com
um elemento correspondente da matriz B, ou seja, a
operação de processamento deve estar baseada na
operação C[I] ← A[I] – B[I]. Ao final, apresentar os
elementos da matriz C.*/

#include <stdio.h>

int main(){

    float a[20], b[20], c[20];
    int i;
    
    printf("Construa a matriz C: ");
    for ( i = 0; i < 20; i++){   
        printf("Digite o %d numero da matriz A: ", i+1);
        scanf("%f", &a[i]);
    
        printf("Digite o %d numero da matriz B: ", i+1);
        scanf("%f", &b[i]);
    
        c[i]= a[i]-b[i];
    }
    
    printf("Os elementos da matriz C sao: \n");
    for ( i = 0; i < 20; i++){
        printf(" %.f ", c[i]);
    }
    return 0;
}