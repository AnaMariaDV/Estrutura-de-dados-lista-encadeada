#include"lib.h"

void imprimirLista(Node *cabeca) {
    if(cabeca == NULL) {
        printf("\nLista vazia.\n");
        return;
    }
    int pos = 1;
    printf("\nLista:\n");
    Node *atual = cabeca;
    while(atual != NULL) {
        printf("%d: %s, %d\n", pos, atual->nome, atual->rg);
        atual = atual->next;
        pos++;
    }
}