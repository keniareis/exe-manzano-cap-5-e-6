#include <stdio.h>

int main(){

    int  atual=0, anterior=1, proximo, n;

    for ( n = 0; n <= 14; n++)
    {
        printf("%d\n", atual);

        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }
    return 0;
}