#include <iostream>
using namespace std;

int main () {

  float notaUm, notaDois, media;
  float mediaAlunos[5];
  int contador = 1;

  for (int i = 0; i < 5; i++) {
    cin >> notaUm >> notaDois;
    media = (notaUm + notaDois) / 2;
    mediaAlunos[i] = media;
    notaUm = 0;
    notaDois = 0;    
  }

  for (float m : mediaAlunos) {
    if (m < 6) {
      cout << "Aluno " << contador << " tem a nota: " << m << endl;
    }
    contador++;
  }

  return 0;
}