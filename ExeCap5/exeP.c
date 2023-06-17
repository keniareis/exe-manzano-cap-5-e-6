#include <stdio.h>

int main(){

    float  m, s=0;
    int i;

    for ( i = 50; i <=70; i++)
    {
        if (i%2==0)
        {
            s += i;
        }

        m = s/11;
    }
    printf("O somatorio e: %.2f", s);
    printf("\nA media e: %.2f", m);

    return 0;
}