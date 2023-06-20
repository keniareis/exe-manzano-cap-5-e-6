/*j) Elaborar um programa que leia uma matriz A do tipo vetor
com 20 elementos inteiros. Construir uma matriz B dos
mesmos tipo e dimensão da matriz A, sendo cada elemento
da matriz B o somatório de 1 até o valor do elemento
correspondente armazenado na matriz A. Se o valor do
elemento da matriz A[1] for 5, o elemento correspondente da
matriz B[1] deve ser 15, pois o somatório do elemento da
matriz A é 1 + 2 + 3 + 4 + 5. Apresentar os elementos da
matriz B.*/

#include <stdio.h>

int main(){

    int a[20], b[20],soma, i, c;

    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 20; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 20; i++){
        soma=0;
        for ( c = 1; c<= a[i]; c++){
            soma+=c;
        }
        b[i]=soma;
    }
    printf("Os elementos da Matriz B sao: \n");
    for (i = 0; i < 20; i++){
        printf("%d  ", b[i]);
    }
    return 0;
}