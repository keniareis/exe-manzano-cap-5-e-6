/*i) Escrever um programa que leia três matrizes (A, B e C) de
uma dimensão do tipo vetor com cinco elementos cada que
sejam do tipo real. Construir uma matriz D, sendo esta o
resultado da junção das três matrizes (A, B e C). Desta
forma, a matriz D deve ter o triplo de elementos das
matrizes A, B e C, ou seja, 15 elementos. Apresentar os
elementos da matriz D.*/
#include <stdio.h>

int main(){

    float a[5], b[5], c[5], d[15];
    int i;

    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 5; i++)    {
        printf("Elemento %d: ", i+1);
        scanf("%f", &a[i]);
    }
    printf("Digite os elementos da matriz B: \n");
    for (i = 0; i < 5; i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &b[i]);
    }
    printf("Digite os elementos da matriz C: \n");
    for (i = 0; i < 5; i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &c[i]);
    }
    printf("Os elementos da matriz C sao: \n");
    for ( i = 0; i < 5; i++) {
        d[i]=a[i];
        printf("%.f ", d[i]);
    }
    for ( i = 0; i < 5; i++) {
        d[i]=b[i];
        printf("%.f ", d[i]);
    }
    for ( i = 0; i < 5; i++){
        d[i]=c[i];
        printf("%.f ", d[i]);
    }
    return 0;
}