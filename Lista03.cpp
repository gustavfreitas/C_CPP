#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Exercício 26

/*

typedef struct No {
	int valor;
    No* prox;
    No* ant;
} No;

void inserir_inicio(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    novo->ant = NULL;
    novo->prox = *head;

    if (*head != NULL) {
        (*head)->ant = novo;
    }
    *head = novo;
}

void imprime_frente(No* p) {
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
    printf("NULL\n");
}


void imprime_traz(No* p) {
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
    while (p != NULL) {
        printf("[%d]->", p->valor);
    }
}

void main() {
    No* head = NULL;
    inserir_inicio(&head, 10);
    imprime_traz(head);
    inserir_inicio(&head, 20);
    imprime_frente(head);
    inserir_inicio(&head, 30);
    imprime_traz(head);
    inserir_inicio(&head, 40);
    imprime_frente(head);
    printf("[NULL]");
}

*/
