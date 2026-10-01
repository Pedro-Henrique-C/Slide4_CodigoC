#include <stdio.h>

int main()  
{   
    float preçof;  
    int produto;
    float imposto = 1.08;
    printf("Digite o preço do produto: ");
    scanf ("%d", &produto);
    preçof = produto * imposto;
    printf("o preço do produto com imposto é: %f\n", preçof);
    
    return 0;
}