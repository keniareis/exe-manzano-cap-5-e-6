/*d) Elaborar um programa que leia 15 elementos inteiros de
uma matriz A do tipo vetor. Construir uma matriz B de
mesmo tipo, observando a seguinte lei de formação: “todo
elemento da matriz B deve ser o quadrado do elemento da
matriz A correspondente”. Apresentar os elementos das
matrizes A e B.*/
#include <stdio.h>

int main(){

    int a[15], b[15], i;

    for ( i = 0; i < 15; i++){   
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &a[i]);

        b[i]= a[i]*a[i];
    }
    
    printf("\n==Os elementos da matriz A sao:==\n");
    for ( i = 0; i < 15; i++){
        printf(" %d ", a[i]);
    }
        printf("\n==Os elementos da matriz B sao:==\n");
    for ( i = 0; i < 15; i++){
        printf(" %d ", b[i]);
    }

    return 0;
}