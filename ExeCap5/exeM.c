#include <stdio.h>

int main(){

    float  m, s=0;
    int v, i;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &v);
        
        s += v;

        m = s/10;
    }
    printf("O somatorio e: %.2f", s);
    printf("\nA media e: %.2f", m);
}