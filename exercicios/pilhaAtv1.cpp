#include <iostream>
#include <stack>
using namespace std;

int main () {

  stack<int> myStack;
  int sum(0);

  for (int i = 0; i < 10; i++) {
    myStack.push(i);
  }

  while (!myStack.empty()) {
    sum += myStack.top();
    cout << "Ordem de retirada: " << myStack.top() << endl;
    myStack.pop();
  }

  cout << "A soma dos elementos da pilha eh: " << sum << endl;

  return 0;

}