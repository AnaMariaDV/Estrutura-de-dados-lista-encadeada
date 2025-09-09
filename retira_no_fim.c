
#include"lib.h"
void removerNoFim(Node **cabeca) {
   int comp = 0, mov = 0, pos = 1;
   clock_t inicio = clock();
   
   if(*cabeca == NULL) {
       comp++;
       printf("\nLista vazia. Nao ha no para retirar no fim.\n");
       return;
   }
   Node *atual = *cabeca, *anterior = NULL;
   comp++;
   if(atual->next == NULL) {
       *cabeca = NULL; mov++;
       clock_t fim = clock();
       double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
       printf("\nRemocao no fim:\n");
       printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
              atual->nome, atual->rg, comp, mov, tempo, pos);
       free(atual);
       return;
   }
   while(atual->next != NULL) {
       comp++;
       anterior = atual; mov++;
       atual = atual->next; mov++;
       pos++;
   }
   anterior->next = NULL; mov++;
   clock_t fim = clock();
   double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
   printf("\nRemocao no fim:\n");
   printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
          atual->nome, atual->rg, comp, mov, tempo, pos);
   free(atual);
}