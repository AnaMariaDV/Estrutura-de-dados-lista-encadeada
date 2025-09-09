#include"lib.h"

void inserirNoFim(Node **cabeca, char *nome, int rg) {
    int comp = 0, mov = 0, pos = 1;
    clock_t inicio = clock();
    
    Node *novo = criarNo(nome, rg);
    mov++; 
    if(*cabeca == NULL) {
        comp++;
        *cabeca = novo;
        mov++;
        clock_t fim = clock();
        double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("\nInsercao no fim:\n");
        printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
          novo->nome, novo->rg, comp, mov, tempo, 1);
        return;
    }
    Node *atual = *cabeca;
    comp++; 
    while(atual->next != NULL) {
        comp++;
        atual = atual->next; 
        mov++; 
        pos++;
    }
    atual->next = novo; mov++; 
    pos++;
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
   printf("\nInsercao no fim:\n");
   printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
         novo->nome, novo->rg, comp, mov, tempo, pos);
}