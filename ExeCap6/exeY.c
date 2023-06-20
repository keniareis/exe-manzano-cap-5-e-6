/*Escrever um programa que leia uma matriz A de uma
dimensão com 15 elementos numéricos inteiros. Apresentar
o total de elementos pares existentes na matriz.*/
#include <stdio.h>

int main(){

    int a[15], i, ca=0;

    printf("Digite elementos da matriz A: \n");
    for (i = 0; i < 15; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);

        if (a[i]%2==0)
        {
            ca++;
        }
    }    
    printf("\nA matriz A tem %d elementos pares", ca);
    return 0;
}
