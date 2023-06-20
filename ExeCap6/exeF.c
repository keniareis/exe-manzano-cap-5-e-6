/*f) Construir um programa que leia duas matrizes A e B do tipo
vetor com 15 elementos quaisquer inteiros. Construir uma
matriz C, sendo esta o resultado da junção das matrizes A e
B. Desta forma, a matriz C deve ter o dobro de elementos
em relação às matrizes A e B, ou seja, a matriz C deve
possuir 30 elementos. Apresentar a matriz C.*/

#include <stdio.h>

int main(){
    float a[15], b[15], c[30];
    int i;
    
    printf("Construa a matriz C: \n");
    for ( i = 0; i < 15; i++){   
        printf("Digite o %d numero da matriz A: ", i+1);
        scanf("%f", &a[i]);
    
        printf("Digite o %d numero da matriz B: ", i+1);
        scanf("%f", &b[i]);
    
        c[i]= a[i];
        c[i+15]=b[i];
    }
    
    printf("Os elementos da matriz C sao: \n");
    for ( i = 0; i < 30; i++){
        printf(" %.f ", c[i]);
    }
    return 0;
}