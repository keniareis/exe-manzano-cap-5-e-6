/*Escrever um programa que leia 25 elementos (valores reais)
para temperaturas em graus Celsius e armazene esses
valores em uma matriz A de uma dimensão do tipo vetor.
Construir uma matriz B de mesmos tipo e dimensão, em que
cada elemento da matriz B deve ser a conversão da
temperatura em graus Fahrenheit do elemento
correspondente da matriz A. Apresentar os elementos das
matrizes A e B.*/
#include <stdio.h>

int main (){

    float a[25], b[25], F;
    int i;
    
    printf("Digite as temperaturas em celsius: \n");
    for (i = 0; i < 25; i++){
        printf("Temperatura %d: ",i+1);
        scanf("%f", &a[i]);
    }
    for ( i = 0; i < 25; i++)
    {
        F=0;
        F=a[i]*9/5+32;
        b[i]= F;
    }
    printf("Os elementos da conversao sao: \n");
    for (i = 0; i < 25; i++){
        printf("%.2f  ", b[i]);
    }
    return 0;     
}