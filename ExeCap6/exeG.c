/*g) Elaborar um programa que leia duas matrizes do tipo vetor
para o armazenamento de nomes de pessoas, sendo a
matriz A com 20 elementos e a matriz B com 30 elementos.
Construir uma matriz C, sendo esta a junção das matrizes A
e B. Desta forma, a matriz C deve ter a capacidade de
armazenar 50 elementos. Apresentar os elementos da
matriz C.*/

#include <stdio.h>
#include <string.h>

int main(){
    char a[20][500], b[30][500], c[50][1000];
    int i, ca=0, cb=0;
    printf("Construa a matriz C: \n");
    for ( i = 0; i < 20; i++){   
        printf("Digite o %d nome da matriz A: ", i+1);
        scanf("%s", a[i]);

        strcpy(c[ca],a[i]);  
        ca++;
    }
    for ( i = 0; i < 30; i++){           
        printf("Digite o %d nome da matriz B: ", i+1);
        scanf("%s", b[i]);

        strcpy(c[cb], b[i]);
        cb++;
    }
    printf("Os elementos da matriz C sao: \n");
    for ( i = 0; i < (ca+cb); i++){
        printf("%s ", c[i]);

        printf("%s ", c[i+20]);
    }
    return 0;
}