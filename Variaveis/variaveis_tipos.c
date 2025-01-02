#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Permite a utilização de acentos
    setlocale (LC_ALL,"");
    //Imprime Olá
    printf("Olá");
    //Declarar Variavel
    int a = 5;
    printf("%d", a);
    //Texto com Variavel

    //Leitura de um Valor Inteiro
    int b = 50;
    printf("O Valor de b é: %d", b);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);
    //Leitura de um Valor Racional
    float c = 5.0;
    printf("O Valor de c é: %d", c);
    scanf("%f", &c);
    printf("O valor de c mudou para %f", c);
    //Leitura de uma Letras
    char d = 't';
    printf("O Valor de d é: %d \n", letra);
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);
}
