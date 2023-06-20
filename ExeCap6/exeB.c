/*b) Elaborar um programa que leia oito elementos inteiros em
uma matriz A do tipo vetor. Construir uma matriz B de
mesma dimensão com os elementos da matriz A
multiplicados por 3. O elemento B[1] deve ser implicado pelo
elemento A[1] * 3, o elemento B[2] implicado pelo elemento
A[2] * 3, e assim por diante, até 8. Apresentar a matriz B.*/

#include <stdio.h>

int main(){

    int a[8], b[8], i;

    for ( i = 0; i < 8; i++){   
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &a[i]);

        b[i]= a[i]*3;
    }
    
    printf("Os elementos da matriz B sao: \n");
    for ( i = 0; i < 8; i++){
        printf(" %d ", b[i]);
    }

    return 0;
}