#include <stdio.h>

int main(){

    int B, E, P=1,n;
    
    printf("Informe a base: ");
    scanf("%d", &B);
    printf("Informe o expoente: ");
    scanf("%d", &E);
   
    for ( n = 1; n <= E; n++)
    {
        P *=B;
    }
    
    printf("A pontencia de %d elevado a %d e igual a %d", B, E, P);

    return 0;

}