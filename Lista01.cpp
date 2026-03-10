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

/*
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

*/

// Exercício 07

/*
void imprime_array(const int* v, int n);

int main() 
{
	int v[5] = { 10,20,30,40,50 };
	int* p = v;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(v + i));
	}
}

*/

// Exercício 08
/*
int meu_strlen(const char* s);

void main() 
{

	char string[20] = "radioknife";
	char* s = string; 
	int qtd = meu_strlen(s);
	printf("A Quantidade de Caracteres eh: %d \n", qtd);

	meu_strlen(s);
}

int meu_strlen(const char* s) 
{
	if (s == NULL) return -1;
	int contador = 0;
	while (*s != '\0') {
		s++;
		contador++;
	}
	return contador;
}
*/

// Exercício 09
/*
typedef struct{
	char nome[50];
	int ra;
	float nota;
} Aluno;

void imprime_aluno(const struct Aluno* a) {

	if (a == NULL) {
		printf("Error 404\n");
	}
	return;

	printf("Nome: %s | RA: %d | Nota: %.2f", a->nome, a->ra, a->nota);

}

void main()
{

	Aluno 

}

*/

// Exercício 10

/*

int* criar_int(int valor) {
	int* p = (int*) malloc(sizeof(int));
	*p = valor;
	return p;
}

int main() {
	int* p = criar_int(42);
	printf("Valor de valor: %d", *p);
	free(p);
	*p = NULL;
}

*/


// Exercício 11

/*

typedef struct No {
	int valor;
	struct No* prox;
} No;

No* criar_No(int valor) 
{
	No* p = (No*)malloc(sizeof(No*));
	p->valor = valor;
	p->prox = NULL;
	return p;
}

int* criar_int(int valor) {
	int* p = (int*)malloc(sizeof(No));
	*p = valor;
	return p;
}

int main() {
	No* p = criar_No(42);
	printf("Valor de valor: %d", p->valor);
	free(p);
}

*/

// Exercício 12

/*

typedef struct No {
	int valor;
	struct No* prox;
} No; 

void push_front(No** head, int v) {
	No* novo = (No*)malloc(sizeof(No));
	if (novo == NULL) return;
	novo->valor = v;
	novo->prox = *head;
	*head = novo;
}
int main() {
	No* head = NULL;

	push_front(&head, 30);
	push_front(&head, 20);
	push_front(&head, 10);

	for (No* p = head; p != NULL; p = p->prox) {
		printf("%d -> ", p->valor);
	}

	printf("NULL\n");
}
	
*/

// Exercício 13

/*

typedef struct No {
	int valor;
	struct No* prox;
} No;

void push_front(No** head, int v) {
	No* novo = (No*)malloc(sizeof(No));
	if (novo == NULL) return;
	novo->valor = v;
	novo->prox = *head;
	*head = novo;
}
int main() {
	No* head = NULL;
	int count;

	push_front(&head, 30);
	push_front(&head, 20);
	push_front(&head, 10);

	for (No* p = head; p != NULL; p = p->prox) {
		printf("%d -> ", p->valor);
		count += p->valor;
	}

	printf("NULL\n");

	*/

// Exercício 14

/*

typedef struct No {
	int valor;
	struct No* prox;
} No;

void push_front(No** head, int v) {
	No* novo = (No*)malloc(sizeof(No));
	if (novo == NULL) return;
	novo->valor = v;
	novo->prox = *head;
	*head = novo;
}

No* busca(No* head, int v) {
	for (No* p = head; p != NULL; p = p->prox) {
		if (p->valor == v) return p;
	}
	return NULL;
}


int main() {
	No* head = NULL;
	int count;

	push_front(&head, 30);
	push_front(&head, 20);
	push_front(&head, 10);

	No* buscado = busca(head, 20);
	if (buscado != NULL) {
		printf("O Valor encontrado eh: %d", buscado->valor);
	}
	else {
		printf("O Valor não foi encontrado");
	}

	for (No* p = head; p != NULL; p = p->prox) {
		printf("%d -> ", p->valor);
		count += p->valor;
	}

	printf("NULL\n");

	*/

// Exercício 15

/*

typedef struct No {
	int valor;
	struct No* prox;
} No;

void push_front(No** head, int v) {
	No* novo = (No*)malloc(sizeof(No));
	if (novo == NULL) return;
	novo->valor = v;
	novo->prox = *head;
	*head = novo;
}

No* busca(No* head, int v) {
	for (No* p = head; p != NULL; p = p->prox) {
		if (p->valor == v) return p;
	}
	return NULL;
}

void pop_front(No** head) {
	if (head == NULL) return;
	No* temp = *head;
	*head = temp->prox;
	free(temp);

}

int main() {
	No* head = NULL;

	push_front(&head, 30);
	push_front(&head, 20);
	push_front(&head, 10);


	No* buscado = busca(head, 20);
	if (buscado != NULL) {
		printf("O Valor encontrado eh: %d", buscado->valor);
	}
	else {
		printf("O Valor não foi encontrado");
	}


	for (No* p = head; p != NULL; p = p->prox) {
		printf("%d", p->valor);
	}
	return NULL;
}

*/

// Exercício 16

/*

typedef struct No {
	int valor;
	struct No* prox;
} No;

void push_front(No** head, int v) {
	No* novo = (No*)malloc(sizeof(No));
	if (novo == NULL) return;
	novo->valor = v;
	novo->prox = *head;
	*head = novo;
}

No* busca(No* head, int v) {
	for (No* p = head; p != NULL; p = p->prox) {
		if (p->valor == v) return p;
	}
	return NULL;
}

void pop_front(No** head) {
	if (head == NULL) return;
	No* temp = *head;
	*head = temp->prox;
	free(temp);

}

void free_lista(No **head)
{
	No* atual = *head;
	while (atual != NULL) {
		No* prox = atual->prox; 
		free(atual);
		atual = prox;
	}
	*head = NULL;
}

int main() {
	No* head = NULL;

	push_front(&head, 30);
	push_front(&head, 20);
	push_front(&head, 10);


	No* buscado = busca(head, 20);
	if (buscado != NULL) {
		printf("O Valor encontrado eh: %d", buscado->valor);
	}
	else {
		printf("O Valor não foi encontrado");
	}


	for (No* p = head; p != NULL; p = p->prox) {
		printf("%d", p->valor);
	}
	return NULL;
}

*/
