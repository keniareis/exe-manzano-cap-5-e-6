/*a) Elaborar um programa que efetue a leitura de dez nomes de
pessoas em uma matriz A do tipo vetor e apresentá-los em
seguida.*/

#include<stdio.h>

int main(){
    
    char nome[10][100];
    int i=0;

    printf("Digite os nomes: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("Nome %d: \n", i+1);
        scanf("%s", nome[i]);
    }
    
    printf("Os nomes da matriz e: \n");
   for (i = 0; i < 10; i++)
   {
        printf("=%s=", nome[i]);
   }
   
    return 0;
}
