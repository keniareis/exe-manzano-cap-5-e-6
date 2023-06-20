/* Elaborar um programa que leia duas matrizes A e B de uma dimensão com seis elementos. A matriz A deve aceitar
apenas a entrada de valores pares, enquanto a matriz B deve aceitar apenas a entrada de valores ímpares. A
entrada das matrizes deve ser validada pelo programa, e não pelo usuário. Construir uma matriz C que seja o
resultado da junção das matrizes A e B, de modo que a matriz C contenha 12 elementos. Apresentar os elementos
da matriz C.*/
#include <stdio.h>

int main(){

int a[6], b[6], c[12], c1=0, i;

    printf("Digite elementos pares para a matriz A: \n");
    for (i = 0; i < 6; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);
        if (a[i]%2!=0){
            printf("Valor Invalido!\n Insira outro: ");
            scanf("%d", &a[i]);
        }
        c[c1]=a[i];
        c1++;
    } 
    printf("\nDigite elementos impares para a  matriz  B: \n");
    for (i = 0; i < 6; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &b[i]);
        if (b[i]%2==0) {
            printf("Valor Invalido!\n Insira outro: ");
            scanf("%d", &b[i]);
        }
        c[c1]=b[i];
        c1++;
    }    
    printf("\nOs elementos da matriz C sao: \n");
    for ( i = 0; i < c1; i++)
    {
        printf("%d ", c[i]);
    }
    
}
