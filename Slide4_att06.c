#include <stdio.h>

int main()  
{   
    float resultado;  
    float altura;
    int peso;
    printf("Digite sua altura em metros: ");
    scanf ("%f", &altura);
    printf("Digite seu peso em kg: ");
    scanf("%d", &peso);
    resultado = peso / (altura * altura);
    printf("Seu IMC é %f", resultado);
    return 0;
}