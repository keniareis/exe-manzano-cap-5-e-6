/*h) Elaborar um programa que leia 20 elementos do tipo real
em uma matriz A unidimensional e construir uma matriz B de
mesma dimensão com os mesmos elementos armazenados
na matriz A, porém de forma invertida. Ou seja, o primeiro
elemento da matriz A passa a ser o último da matriz B, o
segundo elemento da matriz A passa a ser o penúltimo da
matriz B, e assim por diante. Apresentar os elementos das
matrizes A e B.*/
#include <stdio.h>

int main(){

    float a[20], b[20];
    int i;
    
    printf("Digite os elementos da matriz A: \n");

    for (i = 0; i < 20; i++){
        printf("Elemento %d: ",i+1);
        scanf("%f", &a[i]);
    }
   
    printf("Os elementos da matriz B sao: \n");
    for ( i = 19; i >= 0; i--)
    {
        b[i]=a[i];
        printf("%.f\n", b[i]);
    }
    return 0;
}