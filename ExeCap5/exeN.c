#include <stdio.h>

int main(){

    float  m, s=0;
    int v, i;
    
    printf("Para sair digite um numero negativo\nDigite os valores: \n");

    for ( i = 0; i >= 0; i++)
    {
        printf("Valor %d: ", i+1 );
        scanf("%d", &v);
        if (v<0)
        {
            break;
        }
        else
        {
            s+=v;
        }
        m=s/(i+1);
    }
    printf("O somatorio e: %.2f", s);
    printf("\nA media e: %.2f", m);
    printf("\nO total de valores lidos foi de: %d", i);

    return 0;
}