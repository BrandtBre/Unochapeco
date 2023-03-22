#include <iostream>
#include <string.h>
using namespace std;

struct agenda {
    char nome[30];
    char telefone[30];
    char endereco[30];
    char empresa[30];
    agenda *prox;
};

typedef struct agenda Lista;

Lista* criaLista(void) {
    return NULL;
}

Lista* insereLista(Lista* inicio, Lista* aux) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    cout << "Informe o nome: ";
    cin >> novo->nome;
    cout << "Informe o telefone: ";
    cin >> novo->telefone;
    cout << "Informe o endereco: ";
    cin >> novo->endereco;
    cout << "Informe a empresa: ";
    cin >> novo->empresa;
    novo->prox = NULL;
    
    if (inicio == NULL) {
        inicio = novo;
    } else {
        aux = inicio;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

void printada(Lista* l) {
    Lista* aux = l;
    while (aux != NULL) {
        cout << "Nome: " << aux->nome << endl;
        cout << "Telefone: " << aux->telefone << endl;
        cout << "Endereco: " << aux->endereco << endl;
        cout << "Empresa: " << aux->empresa << endl;
        aux = aux->prox;
    }
}

int main () {
    Lista *inicio, *novo, *aux;
    int opcao;
    inicio = NULL;

    do {
        inicio = insereLista(inicio, aux);

        cout << "Deseja continuar? (1 - Sim / 2 - Nao): ";
        cin >> opcao;
    } while (opcao == 1);

    cout << "Deseja imprimir a lista? (1 - Sim / 2 - Nao): ";
    cin >> opcao;

    if (opcao == 1) {
        printada(inicio);
    }

    return 0;
}
