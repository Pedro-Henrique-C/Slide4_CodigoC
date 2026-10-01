#include <stdio.h>

int main()  
{   
    float fah;  
    float cel;
    printf("Digite a temperatura em celsius: ");
    scanf ("%f", &cel);
    fah = (cel * 1.8) + 32;
    printf("A temperatura em fahrenheit é:  %f\n", fah);
    
    return 0;
}