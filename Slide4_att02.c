#include <stdio.h>

int main()  
{   float media;  
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    printf("Digite o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf ("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf ("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf ("%d", &num4);
    printf("Digite o quinto numero: ");
    scanf ("%d", &num5);
    media = (num1 + num2 + num3 + num4 + num5)/5;
    printf("a media destas notas é: %f\n", media);
    
    return 0;
}