#include <stdio.h>

int main(){

    int n, p;

    p=0;
    n=1;
   do
   {
    if (n % 2 == 0)
    {
        p = p + n;
    }
    n++;
   } while (n <= 500);

    printf("O somatorio dos valores pares esxitentes na faixa de na de 1 a 500 e %d ", p);

    return 0;
}