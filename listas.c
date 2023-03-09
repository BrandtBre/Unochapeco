#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dadoUm, dadoDois;
    struct no *proximo;
} no;

int main() {
    no *iniNo = NULL;
    no *novoNo = NULL;
    int flagContinuar;

    iniNo = (no *) malloc(sizeof(no));

    if (iniNo == NULL) {
        printf("Erro de alocacao de memoria");
        return 0;
    }

    novoNo = iniNo;
    while(1) {
        printf("Digite o primeiro dado: ");
        scanf("%d", &novoNo->dadoUm);
        printf("Digite o segundo dado: ");
        scanf("%d", &novoNo->dadoDois);

        printf("Deseja continuar? (1 - sim, 0 - nao): ");
        scanf("%d", &flagContinuar);

        if (flagContinuar == 1) {
          novoNo->proximo = (no *)malloc(sizeof(no));
          novoNo = novoNo->proximo;
        } else {
          break;
        }
        
    }

    printf("\n");
    novoNo->proximo = NULL;
    novoNo = iniNo;

    while (novoNo != NULL) {
        printf("Primeiro dado: %d - Segundo dado: %d \n", novoNo->dadoUm, novoNo->dadoDois);
        novoNo = novoNo->proximo;
    }

    return 0;
}