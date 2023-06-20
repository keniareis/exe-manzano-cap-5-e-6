/* Construir um programa que calcule a tabuada de um valor
qualquer de 1 até 10 e armazene os resultados em uma
matriz A de uma dimensão. Apresentar os elementos da
matriz A.*/
#include <stdio.h>

int main(){

    int a[10],t,s, i;

    printf("Digite o elemento da tabuada: \n");
    scanf("%d", &t);
    for ( i = 0; i < 10; i++)
    {
        s=t;
        s*=(i+1);
        a[i]=s;
    }
    printf("A Tabuada e: \n");
    for (i = 0; i < 10; i++){ 
        printf("%d ", a[i]);
    }
    return 0;   
}