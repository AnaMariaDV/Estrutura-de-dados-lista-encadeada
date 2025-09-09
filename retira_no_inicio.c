
#include"lib.h"

void removerNoInicio(Node **cabeca) {
    int comp = 0, mov = 0;
    clock_t inicio = clock();
    
    if(*cabeca == NULL) {
        comp++;
        printf("\nLista vazia. Nao ha no para retirar no inicio.\n");
        return;
    }
    Node *removido = *cabeca; comp++;
    *cabeca = removido->next; mov++;
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nRemocao no inicio:\n");
    printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: 1\n",
           removido->nome, removido->rg, comp, mov, tempo);
    free(removido);
}