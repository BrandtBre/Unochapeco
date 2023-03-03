#include <iostream>
using namespace std;

int main () {
  int a;
  int b;
  int c;
  int *ponteiro;

  a = 34;
  b = 43;
  c = 32;
  ponteiro = &a;

  cout << "O endereco de a eh: " << ponteiro << endl;
  cout << "O valor de a eh: " << a << endl;
  cout << "O valor de b eh: " << b << endl;
  cout << "O valor de c eh: " << c << endl;

  return 0;

}