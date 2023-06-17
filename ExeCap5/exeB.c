#include <stdio.h>

int main(){

    int n,t,r;

    printf("Digite o numero da tabuada: ");
    scanf("%d", &t);
    
    n = 1;

    while (n <=10)
    {
        r = t * n;
        printf("%d * %d = %d\n", t, n, r);
        n++;
    }
    printf("Terminou!");
}