#include <stdio.h>

int main(){

    int n,r;
    r = 0;
    n = 1;

    for ( n = 1; n <= 100 ; n++)
    {
        r = r + n;
    }

    printf("A soma dos 100 primeiros numeros naturais e %d", r);

    return 0;    

}