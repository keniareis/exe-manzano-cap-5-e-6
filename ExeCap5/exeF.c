#include <stdio.h>

int main(){

    int n;

    for ( n = 1; n < 200; n++)
    {
        if (n%4==0)
        {
            printf("O numero %d e divisivel por 4\n", n);
        }
    }
    return 0;
}