#include <stdio.h>

int main(){

    int i;
    float fat, n;

    for ( i = 1; i <= 10; i++)
    {
        fat = 1;
        if (i%2!=0)
        {
            for ( n = i; n >=1 ; n--)
            {
                fat*=n;
            }
            
        } else
        {
            continue;
        }
        
        printf("A fatorial de %d e: %.2f\n", i, fat);
    }
    
}