// Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o
// nome da banda, que tipo de música ela toca, o número de integrantes e em que posição
// do ranking essa banda está dentre as suas 5 bandas favoritas.
//Crie um looping para preencher as 5 estruturas de bandas criadas no exemplo passado.
//Após criar e preencher, exiba todas as informações das bandas/estruturas.

#include <iostream>
#include <string>
using namespace std;

struct banda {
  string nome;
  string generoMusical;
  int integrantes;
  int ranking;
};

int main () {

  banda vetor[5];

  for (int i = 0; i < 5; i++) {
    cout << "Digite o nome da banda: ";
    cin >> vetor[i].nome;
    cout << "Digite o genero musical: ";
    cin >> vetor[i].generoMusical;
    cout << "Digite o numero de integrantes: ";
    cin >> vetor[i].integrantes;
    cout << "Digite o ranking: ";
    cin >> vetor[i].ranking;
  }

  for (int i = 0; i < 5; i++) {
    cout << "Nome: " << vetor[i].nome << endl;
    cout << "Genero musical: " << vetor[i].generoMusical << endl;
    cout << "Numero de integrantes: " << vetor[i].integrantes << endl;
    cout << "Ranking: " << vetor[i].ranking << endl;
  }
  
  

  return 0;
}