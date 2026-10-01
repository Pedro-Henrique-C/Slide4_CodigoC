#include <stdio.h>

int main()  
{   
    int resultado;  
    int num1;
    printf("Digite o primeiro numero: ");
    scanf ("%d", &num1);
    if (num1%5 == 0 )
        {
        printf("o numero: %d é um divisor de 5", num1);
        }
    else
        {
        printf("o numero %d não é um divisor de 5", num1);  
        }
    
    return 0;
}