#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

//Crie um Algoritmo que leia 3 valores e mostre o valor e coloque o resultado da multiplicação das 3 em uma unica resposta:

//Declaração de Variaveis
    int num1, num2, num3, resultado;
    printf("Digite os valores:");
    scanf("%d %d %d", &num1, &num2, &num3);

    resultado = num1 * num2 * num3;
    printf("O Resultado dos três valores é: %d", resultado);
}