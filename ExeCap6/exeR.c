/*Elaborar um programa que leia seis elementos (valores
inteiros) para as matrizes A e B de uma dimensão do tipo
vetor. Construir as matrizes C e D de mesmo tipo e
dimensão. A matriz C deve ser formada pelos elementos de
índice ímpar das matrizes A e B e a matriz D deve ser
formada pelos elementos de índice par das matrizes A e B.
Apresentar os elementos das matrizes C e D.*/
#include <stdio.h>

int main(){

    int a[6], b[6], c[6], d[6],c1=0, d1=0, i;

    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 6; i++){
        printf("Elemento %d: ",i);
        scanf("%d", &a[i]);
        if (i%2!=0)
        {
            c[c1]=a[i];
            c1++;
        }
        else
        {
            d[d1]=a[i];
            d1++;
        }
    } 
    printf("Digite os elementos da matriz B: \n");
    for (i = 0; i < 6; i++){
        printf("Elemento %d: ",i);
        scanf("%d", &b[i]);
        if (i%2!=0)
        {
            c[c1]=b[i];
            c1++;
        }
        else
        {
            d[d1]=b[i];
            d1++;
        }
    }
    printf("Os elementos da matriz C sao: \n");
    for ( i = 0; i < c1; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\nOs elementos da matriz D sao: \n");
        for ( i = 0; i < d1; i++)
    {
        printf("%d ", d[i]);
    }
    return 0;
}