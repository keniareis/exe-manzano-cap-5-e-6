#include <stdio.h>

int main(){

    float l, c, areaC, areaT;
    char n[20], d;

   do
   {
    printf("Digite o nome do comodo: ");
    scanf("%s", &n);
    printf("Digite a Largura do(a) %s: ", n);
    scanf("%f", &l);
    printf("Digite o comprimento do(a) %s: ", n);
    scanf("%f", &c);
    
    areaC=l*c;
    areaT += areaC;
    printf("A area do(a) %s e: %.2f\n", n, areaC);
    
    printf("Continuar calculando novos comodos [s/n]? ");
    scanf("%s", &d);
    
   } while (d!='n' && 'N');
    
    printf("A area total da casa e: %.2f\n", areaT);
    
    return 0;
}