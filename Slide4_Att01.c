#include <stdio.h>

int main()  
{   int resultado;  
    int num1;
    int num2;
    printf("Digite o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf ("%d", &num2);
    resultado = num1 * num2;
    printf("a o resultado do primeiro vezes o segundo numero é %d\n", resultado);
    
    return 0;
}