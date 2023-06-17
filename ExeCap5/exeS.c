#include <stdio.h>

int main(){

    int i,r, d1, d2;

    printf("Digite o dividendo: ");
    scanf("%d", &d1);

    printf("Digite o Divisor: ");
    scanf("%d", &d2);

    for (r=0; d1>=d2; r++)
    {
        d1-=d2;
    }
    
    printf("O divisor cabe %d vez(es) no dividendo", r);

    return 0;
}