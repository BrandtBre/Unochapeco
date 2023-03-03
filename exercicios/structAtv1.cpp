#include <iostream>
#include <string>
using namespace std;

struct ficha {
  string nome;
  string endereco;
  int idade;
  float salario;
};

int main () {
  ficha funcionario;

  cout << "Digite o nome do funcionario: \n";
  cin >> funcionario.nome;
  cout << "Digite o endereco do funcionario: \n";
  cin >> funcionario.endereco;
  cout << "Digite a idade do funcionario: \n";
  cin >> funcionario.idade;
  cout << "Digite o salario do funcionario: \n";
  cin >> funcionario.salario;

  cout << "O nome do funcionario eh: " << funcionario.nome << endl;
  cout << "O endereco do funcionario eh: " << funcionario.endereco << endl;
  cout << "A idade do funcionario eh: " << funcionario.idade << endl;
  cout << "O salario do funcionario eh: " << funcionario.salario << endl;

  return 0;
}