/*Elaborar um programa que leia 15 elementos reais para
uma matriz A de uma dimensão do tipo vetor. Construir uma
matriz B de mesmos tipo e dimensão, observando a
seguinte lei de formação: “todo elemento da matriz A que
possuir índice par deve ter seu elemento dividido por 2; caso
contrário, o elemento da matriz A deve ser multiplicado por
1.5”. Apresentar os elementos da matriz B.*/
#include <stdio.h>

int main(){

    int i, a[15];
    float  b[15], m;

    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 15; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &a[i]);
    }      
    for ( i = 0; i < 15; i++)
    {
        m=0;
        if (a[i]%2==0)
        {
            m=a[i]/=2;
        }else
        {
            m=a[i]*(1.5);
        }
        b[i]=m;
    }
    printf("Os elementos da Matriz B sao: \n");
    for (i = 0; i < 15; i++){
        printf("%.1f ", b[i]);
    }
    return 0;       
}