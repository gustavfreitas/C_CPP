#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Ponteiros

// Exercício 01

int main() {

	int a = 5;
	int *p = &a;

	printf("O Valor de a eh: %d\n", a);
	printf("O Endereço de a eh: %p\n", &a);

	printf("O Endereço de a eh %p\n:", p);
	printf("O Valor do ponteiro de a eh: %d\n", *p);

	return 0;
}

// Exercício 02

int main() 
{

	int x = 7;
	int *p = &x;

	printf("O Valor de x seria: %d \n", x);
	
	*p = 42;

	printf("O Valor de x foi alterado para: %d", *p);
}

*/

// Troca de Valores de Ponteiro

/*

void incrementa(int *x) {
	(*x)++;
}

int main() 
{
	int n = 5;
	incrementa(&n);
	printf("%d \n", n);

}
*/

// Exercício 05

/*

void swap(int*x, int*y){
int aux = *y;

	*y = *x;
	*x = aux;

}

int main() 
{
	int x = 3;
	int y = 9;

	printf("O valor das variaveis antes: %d %d\n", x, y);

	swap(&x, &y);

	printf("O valor das variaveis depois: %d %d\n", x ,y);
}

*/

// Exercício 06

void aponta_para_zero(int **pp, int* zero)
{
	*pp = zero;
}
int main() 
{
	int x = 42;
	int zero = 0;

	int *p = &x;

	printf("O Valor do ponteiro sera: %d\n", x);

	aponta_para_zero(&p, &zero);

	printf("O Valor do ponteiro do ponteiro sera: %d", *p);
}

