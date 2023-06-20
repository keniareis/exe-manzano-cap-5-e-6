/*l) Elaborar um programa que leia uma matriz A do tipo vetor
com dez elementos inteiros. Construir uma matriz B de
mesmo tipo, em que cada elemento deve ser a metade
exata de cada um dos elementos existentes da matriz A.
Apresentar os elementos das matrizes A e B.*/

#include <stdio.h>

int main(){

    float a[10], b[10];
    int i;

    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 10; i++){
        printf("Elemento %d: ",i+1);
        scanf("%f", &a[i]);
    }   
    for ( i = 0; i < 10; i++)
    {
        b[i]=a[i]/2;
    }
    printf("Os elementos da Matriz B sao: \n");
    for (i = 0; i < 10; i++){
        printf("%.1f  ", b[i]);
    }
    return 0;       
}
