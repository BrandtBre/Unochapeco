#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class No {
  public: 
    int data;
    No *esquerda, *direita;
    No(int data) {
      this->data = data;
      esquerda = direita = NULL;
    }
};

class Arvore {
  public:
    No *raiz;
    Arvore() {
      raiz = NULL;
    }
};

int altura(No *raiz) {
  if (raiz == NULL) 
    return 0;
  return max(altura(raiz->esquerda), altura(raiz->direita)) + 1;
}

int getcol(int h) {
  if (h == 1) 
    return 1;
  return getcol(h - 1) + getcol(h - 1) + 1;
}

void imprimirNo(int **M, No *raiz, int col, int linha, int altura) {
  if (raiz == NULL)
    return;
  M[linha][col] = raiz->data;
  imprimirNo(M, raiz->esquerda, col - pow(2, altura - 2), linha + 1, altura -1);
  imprimirNo(M, raiz->direita, col + pow(2, altura - 2), linha + 1, altura -1);
}

void imprimirArvore(Arvore arvore) {
  int h = altura(arvore.raiz);
  int col = getcol(h);
  int **M = new int*[h];
  for (int i = 0; i < h; i++) {
      M[i] = new int[col];
  }
  
  imprimirNo(M, arvore.raiz, col / 2, 0, h);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < col; j++) {
      if (M[i][j] == 0)
        cout << " " << " ";
      else 
        cout << M[i][j] << " ";
    }
    
    cout << endl;
  }
}

void imprimirAltura(No *raiz) {
  cout << "Altura da arvore: " << max(altura(raiz->esquerda), altura(raiz->direita)) << endl; 
}

int main()
{
  Arvore minhaArvore;
  minhaArvore.raiz = new No(1);
  minhaArvore.raiz->esquerda = new No(2);
  minhaArvore.raiz->direita = new No(3);
  minhaArvore.raiz->esquerda->esquerda = new No(4);
  minhaArvore.raiz->esquerda->direita = new No(5);
  minhaArvore.raiz->direita->esquerda = new No(6);
  minhaArvore.raiz->direita->direita = new No(7);
  minhaArvore.raiz->esquerda->esquerda->esquerda = new No(8);
  minhaArvore.raiz->esquerda->esquerda->direita = new No(9);
  
  imprimirAltura(minhaArvore.raiz);
  
  imprimirArvore(minhaArvore);
  
  return 0;
}