#include <iostream>
using namespace std;

const int TAMANHO_DO_TABULEIRO = 9;

int tabuleiro[TAMANHO_DO_TABULEIRO][TAMANHO_DO_TABULEIRO] = {
  {7, 0, 2, 0, 5, 0, 6, 0, 0},
  {0, 0, 0, 0, 0, 3 , 0, 0, 0},
  {1, 0, 0, 0, 0, 9 , 5, 0, 0},
  {8, 0, 0, 0, 0, 0 , 0, 9, 0},
  {0, 4, 3, 0, 0, 0 , 7, 5, 0},
  {0, 9, 0, 0, 0, 0 , 0, 0, 8},
  {0, 0, 9, 7, 0, 0 , 0, 0, 5},
  {0, 0, 0, 2, 0, 0 , 0, 0, 0},
  {0, 0, 7, 0, 4, 0 , 2, 0, 3}
};

void exibirTabuleiro() {
    for (int linha = 0; linha < TAMANHO_DO_TABULEIRO; linha++) {
        if (linha % 3 == 0 && linha != 0) {
            cout << "---------------\n";
        }

        for (int coluna = 0; coluna < TAMANHO_DO_TABULEIRO; coluna++) {
            if (coluna % 3 == 0 && coluna != 0) {
                cout << " | ";
            }

            cout << tabuleiro[linha][coluna];
        }

        cout << "\n";
    }
}

bool numeroEstaNaLinha(int numero, int linha) {
    for (int i = 0; i < TAMANHO_DO_TABULEIRO; i++) {
        if (tabuleiro[linha][i] == numero) {
            return true;
        }
    }

    return false;
}

bool numeroEstaNaColuna(int numero, int coluna) {
    for (int i = 0; i < TAMANHO_DO_TABULEIRO; i++) {
        if (tabuleiro[i][coluna] == numero) {
            return true;
        }
    }

    return false;
}

bool numeroEstaNaCaixa(int numero, int linha, int coluna) {
    int localDaCaixaNaLinha = linha - linha % 3;
    int localDaCaixaNaColuna = coluna - coluna % 3;

    for (int i = localDaCaixaNaLinha; i < localDaCaixaNaLinha + 3; i++) {
        for (int j = localDaCaixaNaColuna; j < localDaCaixaNaColuna + 3; j++) {
            if (tabuleiro[i][j] == numero) {
                return true;
            }
        }
    }

    return false;
}

bool localEValido(int numero, int linha, int coluna) {
    return !numeroEstaNaLinha(numero, linha) &&
           !numeroEstaNaColuna(numero, coluna) &&
           !numeroEstaNaCaixa(numero, linha, coluna);
}

bool resolverTabuleiro() {
    for (int linha = 0; linha < TAMANHO_DO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_DO_TABULEIRO; coluna++) {
            if (tabuleiro[linha][coluna] == 0) {
                for (int numero = 1; numero <= 9; numero++) {
                    if (localEValido(numero, linha, coluna)) {
                        tabuleiro[linha][coluna] = numero;
                        if (resolverTabuleiro()) {
                            return true;
                        } else {
                            tabuleiro[linha][coluna] = 0;
                        }
                    }
                }

                return false;
            }
        }
    }

    return true;
}

int main() {

    if (resolverTabuleiro()) {
        exibirTabuleiro();
    } else {
        cout << "Nao ha solucao para esse tabuleiro";
    }

    return 0;
}
