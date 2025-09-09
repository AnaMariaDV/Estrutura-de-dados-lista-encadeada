
#include"lib.h"

void inserirNoPosicao(Node **cabeca, char *nome, int rg, int posDesejada) {
    int comp = 0, mov = 0, pos = 1;
    clock_t inicio = clock();
    
    if(posDesejada <= 1 || *cabeca == NULL) {
        inserirNoInicio(cabeca, nome, rg);
        return;
    }
    Node *novo = criarNo(nome, rg); mov++;
    Node *atual = *cabeca;
    comp++; 
    while(atual != NULL && pos < posDesejada - 1) {
        comp++;
        atual = atual->next; mov++;
        pos++;
    }
    if(atual == NULL) {
       
        inserirNoFim(cabeca, nome, rg);
        return;
    }
    novo->next = atual->next; mov++;
    atual->next = novo; mov++;
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nInsercao na posicao %d:\n", posDesejada);
    printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
           novo->nome, novo->rg, comp, mov, tempo, posDesejada);
}
