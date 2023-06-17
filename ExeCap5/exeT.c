#include <stdio.h>

int main(){

    int q,n=15, i;

    for ( i = 15; i <=200; i+=3)
    {
       q=i*i;
       printf("Quadrado de %d e: %d\n",n, q);
       n+=3;
    }
    return 0;
}