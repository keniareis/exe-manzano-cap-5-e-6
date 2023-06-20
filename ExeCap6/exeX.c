/*Elaborar um programa que leia uma matriz A de uma
dimensão com seis elementos do tipo real. Construir uma
matriz B, em que cada posição de índice ímpar da matriz B
deve ser atribuída com um elemento de índice par existente
na matriz A e cada posição de índice par da matriz B deve
ser atribuída com um elemento de índice ímpar existente na
matriz A. Apresentar os elementos das duas matrizes.*/
#include <stdio.h>

int main(){

    float a[6], b[6]; 
    int i; 

    printf("Digite elementos da matriz A: \n");
    for (i = 0; i < 6; i++){
        printf("Elemento %d: ",i+1);
        scanf("%f", &a[i]);
        if (i%2==0)
        {
            b[i+1]=a[i];
        }
        else
        {
            b[i-1]=a[i];
        }
    }  
    printf("Os Elementos das matrizes sao: \n");
    for ( i = 0; i < 6; i++)
    {
        printf("Matriz A %.1f\n", a[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        printf("Matriz B %.1f\n", b[i]);
    }
    return 0;
}