#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

//Crie um Algoritmo que leia 2 notas e mostre a média entre eles:

//Definindo Variáveis
    float nota1, nota2;
    float resultado;
//Lendo o Primeiro Valor
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
//Lendo o Segundo Valor
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
//Calculando e Mostrando o Resultado Final
    resultado = (nota1 + nota2) / 2;
    printf("A média final é: %f", resultado);
    
}