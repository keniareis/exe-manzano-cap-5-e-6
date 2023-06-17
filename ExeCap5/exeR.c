#include <stdio.h>

int main(){

    int maior, menor;
    int v, i=1;
    
    printf("Para sair digite um numero negativo\nDigite os valores: \n");

    printf("Valor %d: ", i++);
    scanf("%d", &v);

       maior = v;
       menor = v;
       
       while (v>=0)
       {
        
            if (v>maior)
            {
                maior=v;
            }
            if (v<menor)
            {
                menor=v;
            }
     
            printf("Valor %d: ", i++ );
            scanf("%d", &v);

       }
       
    
    printf("O maior valor e: %d", maior);
    printf("\nO menor valor e: %d", menor);

    return 0;
}