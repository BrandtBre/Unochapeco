
//Considerando o registro de uma mercadoria de uma loja contendo as seguintes
//informações:
//• código, nome, preço e estoque
//• Fazer um programa que leia 10 mercadorias e, após as mercadorias informadas, leia um
//código e exiba o nome, preço e estoque da mercadoria que contem o código informado.

#include <iostream>
#include <string>
using namespace std;

struct loja {
  int codigo;
  string nome;
  float preco;
  int estoque;
};

int main () {

  loja vetor[10];

  for (int i = 0; i < 5; i++) {
    cout << "Digite o codigo do produto: ";
    cin >> vetor[i].codigo;
    cout << "Digite o nome do produto: ";
    cin >> vetor[i].nome;
    cout << "Digite o preco do produto: ";
    cin >> vetor[i].preco;
    cout << "Digite o estoque do produto: ";
    cin >> vetor[i].estoque;
  }

  for (int i = 0; i < 5; i++) {
    cout << "Codigo: " << vetor[i].codigo << endl;
    cout << "Nome: " << vetor[i].nome << endl;
    cout << "Preco: " << vetor[i].preco << endl;
    cout << "Estoque: " << vetor[i].estoque << endl;
  }
  
  

  return 0;
}