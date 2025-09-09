#include"lib.h"


void inserirNoInicio(Node **cabeca, char *nome, int rg) {
    int comp = 0, mov = 0;
    clock_t inicio = clock();
    
    Node *novo = criarNo(nome, rg); 
    mov++; 
    
    novo->next = *cabeca;
    mov++; 
    *cabeca = novo;
    mov++; 
    
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
   
    printf("\nInsercao no inicio:\n");
    printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
           novo->nome, novo->rg, comp, mov, tempo, 1);
}