#include <iostream>
using namespace std;

int main () {

  int x; 
  int *ponteiro;
  x = 5;
  ponteiro = &x;
  cout << "O valor de x eh: " << *ponteiro << endl;
  *ponteiro = 10;
  cout << "Agora, o valor de x eh: " << *ponteiro << endl;

  return 0;

}