
#include"lib.h"
void salvarLista(Node *cabeca, const char *nomeArquivo) {
   FILE *arq = fopen(nomeArquivo, "w");
   if(arq == NULL) {
       printf("\nErro ao abrir arquivo para escrita.\n");
       return;
   }
   Node *atual = cabeca;
   while(atual != NULL) {
       fprintf(arq, "%s,%d\n", atual->nome, atual->rg);
       atual = atual->next;
   }
   fclose(arq);
   printf("\nLista salva no arquivo %s.\n", nomeArquivo);
}