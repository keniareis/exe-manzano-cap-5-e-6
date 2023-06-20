/*Elaborar um programa que leia 20 elementos (valores reais)
para temperaturas em graus Celsius e armazene esses
valores em uma matriz A de uma dimensão. O programa ao
final deve apresentar a menor, a maior e a média das
temperaturas lidas.*/
#include <stdio.h>

   int main(){
    float a[20], maior, menor, media, s=0;
    int i;

    printf("Digite as temperaturas: \n");
    for (i = 0; i < 20; i++){
        printf("Temperatura %d: ",i+1);
        scanf("%f", &a[i]);
        if (i==0)
        {
            maior=a[i];
            menor=a[i];
        }else
        {
            if (menor > a[i]){
                menor=a[i];
            }
            if (maior<a[i]){
                maior=a[i];
            }
        }
        s+=a[i];
    }   
    media=s/20;
    printf("O menor, a maior e a media sao respectivamente: \n");
    printf("%.1f, %.1f e %.1f\n", menor, maior, media);

    return 0;       
}    
