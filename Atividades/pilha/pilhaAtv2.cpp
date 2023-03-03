#include <iostream>
#include <stack>
using namespace std;

int main () {

  stack<int> myStack;
  int placas;
  int placaDoIndividuo;

  for(int i = 0; i < 5; i++) {
    cout << "Digite o numero da placa: ";
    cin >> placas;
    myStack.push(placas);
  }

  cout << "Fala um placa ai mermao: ";
  cin >> placaDoIndividuo;

  while (placaDoIndividuo != myStack.top()) {
    myStack.pop();
  }

  while(!myStack.empty()) {
    cout << "Numero da placa dos carros que precisam ser retirados: " << myStack.top();
    myStack.pop();
  }

  cout << "A quantidade de carros que devem ser retirados sao: " << myStack.size();

  return 0;

}