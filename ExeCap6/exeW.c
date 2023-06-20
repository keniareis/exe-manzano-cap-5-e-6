/*Elaborar um programa que leia duas matrizes A e B de uma
dimensão do tipo vetor com dez elementos inteiros cada.
Construir uma matriz C de mesmos tipo e dimensão que
seja formada pelo quadrado da soma dos elementos
correspondentes nas matrizes A e B. Apresentar os
elementos da matriz C.*/
#include <stdio.h>

int main(){

    int a[10], b[10], c[10], i,s=0; 

    printf("Digite elementos pares para a matriz A: \n");
    for (i = 0; i < 10; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);
    }  
    printf("Digite elementos pares para a matriz B: \n");
    for (i = 0; i < 10; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &b[i]);
    }    
    for ( i = 0; i < 10; i++)
    {
        c[i]=(a[i]+b[i])*(a[i]+b[i]);
    }
    
    printf("Os elementos da matriz C sao:");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}