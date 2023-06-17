#include <stdio.h>

int main(){

    int c, f;
    
    for ( c = 10; c <=100; c+=10)
    {
        printf("\nTemperatura em Celsuis: %d ", c);
        
        f=c*9/5+32;
        
        printf("\nTemperatura em Fahrenheit: %d\n", f);
    }
    return 0;
}