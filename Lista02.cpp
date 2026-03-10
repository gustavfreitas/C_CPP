#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Exercício 17

/*

typedef struct No {
	int valor;
	struct No* prox;
} No;

void inserir_inicio(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return; 
    novo->valor = v;
    novo->prox = *head;
    *head = novo;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]", p->valor);
        p = p->prox;
    }
}

void main() {
    No* head = NULL;
    inserir_inicio(&head, 30);
    inserir_inicio(&head, 20);
    inserir_inicio(&head, 10);
    imprime_lista(head);
}

*/

// Exercício 18
/*
typedef struct No {
    int valor;
    struct No* prox;
} No;

void inserir_fim(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    novo->prox = NULL;
    if (*head == NULL) {
        *head = novo;
        return;
    }
    No* atual = *head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
}

void main() {
    No* head = NULL;
    inserir_fim(&head, 30);
    inserir_fim(&head, 20);
    inserir_fim(&head, 10);
    imprime_lista(head);
    printf("[NULL]"); 
}
*/

// Exercício 19

typedef struct No {
    int valor;
    struct No* prox;
} No;

void inserir_ordenado(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    //caso especial: lista vazia ou valor menor que a cabeça
    if (*head == NULL || v <= (*head)->valor) {
        novo->prox = *head;
        *head = novo;
        return;
    }
    //caso geral: encontrar a posição correta
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL && atual->valor < v) {
        anterior = atual;
        atual = atual->prox;
    }
    anterior->prox = novo;
    novo->prox = atual;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
}

void main() {
    No* head = NULL;
    inserir_ordenado(&head, 30);
    inserir_ordenado(&head, 10);
    inserir_ordenado(&head, 20);
    inserir_ordenado(&head, 5);
    inserir_ordenado(&head, 25);
    imprime_lista(head);
    printf("[NULL]");
}