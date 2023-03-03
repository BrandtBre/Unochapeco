#include <iostream>
#include <queue>
using namespace std;

int main () {
  queue<int> myQueue;
  int sum (0);

  for (int i=1;i<=10;i++) myQueue.push(i);

  while (!myQueue.empty()) {
    sum += myQueue.front();
    cout << "Ordem de retirada: " << myQueue.front() << endl;
    myQueue.pop();
  }

  cout << "A soma dos elementos da fila eh: " << sum << endl;

  return 0;

}