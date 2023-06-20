/*Elaborar um programa que leia uma matriz A do tipo vetor
com dez elementos inteiros positivos. Construir uma matriz
B de mesmos tipo e dimensão, em que cada elemento da
matriz B deve ser o valor negativo do elemento
correspondente da matriz A. Desta forma, se em A[1] estiver
armazenado o elemento 8, deve estar em B[1] o valor –8 e
assim por diante. Apresentar os elementos da matriz B.*/
#include <stdio.h>

int main(){

    int a[10], b[10], i;

    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 10; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        b[i]=a[i]*(-1);
    }
    printf("Os elementos da Matriz B sao: \n");
    for (i = 0; i < 10; i++){
        printf("%d  ", b[i]);
    }
    return 0;        
}