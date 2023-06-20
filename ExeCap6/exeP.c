/*Elaborar um programa que leia 12 elementos inteiros para
uma matriz A de uma dimensão do tipo vetor. Construir uma
matriz B de mesmos tipo e dimensão, observando a
seguinte lei de formação: “todo elemento da matriz A que for
ímpar deve ser multiplicado por 2; caso contrário, o
elemento da matriz A deve permanecer constante”.
Apresentar os elementos da matriz B.*/
#include <stdio.h>

int main(){

    int a[12], b[12], i;

    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 12; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);
    }      
    for ( i = 0; i < 12; i++)
    {
        if (a[i]%2!=0)
        {
            a[i]*=2;
        }
        b[i]=a[i];
    }
    printf("Os elementos da Matriz B sao: \n");
    for (i = 0; i < 12; i++){
        printf("%d  ", b[i]);
    }
    return 0;       
}