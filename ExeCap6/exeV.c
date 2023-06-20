/*Construir um programa que leia uma matriz A de uma
dimensão do tipo vetor com 30 elementos do tipo inteiro. Ao
final do programa, apresentar a quantidade de valores pares
e ímpares existentes na referida matriz.*/
#include <stdio.h>

int main(){

    int a[30], i, cp=0, cim=0;

    printf("Digite elementos da matriz A: \n");
    for (i = 0; i < 30; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);
        if (a[i]%2==0)
        {
            cp++;
        }else
        {
            cim++;
        }
    }
    printf("\nA matriz A tem:\n%d Elementos pares\n%d Elementos impares", cp, cim);
    return 0;
}