#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

//Crie um Algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas:

//Definindo Variáveis
    int nota1, nota2;
    
//Lendo o Primeiro Valor
    printf("Digite a primeira nota:");
    scanf("%d", &nota1);

//Lendo o Segundo Valor
    printf("Digite a segunda nota:");
    scanf("%d", &nota2);

//Calculando e Mostrando o Resultado Final
    printf("A diferenca da nota sera de: %d", abs(nota1 - nota2));
    
}