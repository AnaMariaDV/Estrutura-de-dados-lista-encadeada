#include"lib.h"
void removerNoPosicao(Node **cabeca, int posDesejada) {
   int comp = 0, mov = 0, pos = 1;
   clock_t inicio = clock();
   
   if(*cabeca == NULL || posDesejada < 1 || posDesejada <1) {
       printf("\nPosicao invalida.\n");
       return;
   }
   if(posDesejada == 1) {
       removerNoInicio(cabeca);
       return;
   }
   Node *atual = *cabeca, *anterior = NULL;
   while(atual != NULL && pos < posDesejada) {
       comp++;
       anterior = atual;
       atual = atual->next; mov++;
       pos++;
   }
   if(atual == NULL) {
       printf("\nPosicao %d invalida.\n", posDesejada);
       return;
   }
   anterior->next = atual->next; mov++;
   clock_t fim = clock();
   double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
   printf("\nRemocao na posicao %d:\n", posDesejada);
   printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
          atual->nome, atual->rg, comp, mov, tempo, posDesejada);
   free(atual);
}