
/*Elaborar um programa que leia uma matriz A de uma
dimensão com dez elementos numéricos inteiros.
Apresentar o total de elementos ímpares existentes na
matriz e também o percentual do valor total de números
ímpares em relação à quantidade total de elementos
armazenados na matriz.*/
#include <stdio.h>

int main(){

    int a[10], i, ca=0;
    float p=0;

    printf("Digite elementos da matriz A: \n");
    for (i = 0; i < 10; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);

        if (a[i]%2!=0)
        {
            ca++;
        }
    }
    p=((float)ca/10)*100;
    printf("\nA matriz A tem %d elementos impares\n", ca);
    printf("Ou seja %.f%% Porcento sao impares", p);
    return 0;
}
