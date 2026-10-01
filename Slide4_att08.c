#include <stdio.h>

int main()  
{   
    float valor = 7.37;
    int horas;
    float salario;
    float semana;
    float mes;
    printf("Digite as horas trabalhadas na semana : ");
    scanf("%d", &horas);
    semana = horas * valor;
    mes = semana * 4;
    printf("O Salario semanal do trabalhador foi %f, e o mensal vai ser %f", semana, mes);
    
}