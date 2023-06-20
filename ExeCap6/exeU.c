/*Elaborar um programa que leia duas matrizes A e B de uma dimensão com 12 elementos. A matriz A deve aceitar
apenas a entrada de valores divisíveis por 2 ou 3, enquanto a matriz B deve aceitar apenas a entrada de valores que
não sejam múltiplos de 5. A entrada das matrizes deve ser alidada pelo programa, e não pelo usuário. Construir uma
matriz C que seja o resultado da junção das matrizes A e B, de forma que contenha 24 elementos. Apresentar os
elementos da matriz C.*/
#include <stdio.h>

int main(){

int a[10], b[10], c[20], c1=0, i;

    printf("Digite elementos divisiveis por 2 e 3 para a matriz A: \n");
    for (i = 0; i < 10; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);
        if (!(a[i]%2==0 || a[i]%3 == 0)){
            printf("Valor Invalido!\n Insira outro: ");
            scanf("%d", &a[i]);
        }
        c[c1]=a[i];
        c1++;
    } 
    printf("\nDigite elementos multiplos de 5 para a  matriz  B: \n");
    for (i = 0; i < 10; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &b[i]);
        if (b[i]%5==0) {
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
    return 0;
}