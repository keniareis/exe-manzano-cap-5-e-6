#include <stdio.h>

int main(){

    int n, i, soma=0, c, fat;

    for ( i = 0; i < 15; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &n);
        
        fat = 1;

        for ( c = n; c >= 1; c--)
        {
            fat *= c;
        }
        
        soma += fat;
    }
    printf("A soma da fatorial de cada um e: %d", soma);

    return 0;
}