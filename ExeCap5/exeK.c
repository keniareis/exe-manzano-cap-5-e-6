#include <stdio.h>

int main(){

    float g=0, c, n=1;

    for ( c = 0; c < 64; c++)
    {
        g += n;
        n*=2;
    }
    
printf("o somatorio foi de %.2f", g);

}