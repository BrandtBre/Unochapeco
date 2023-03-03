#include <iostream>
using namespace std;

int main () {

  int *v;
  int i;
  
  v = new int[5];
  v[0] = 1;
  v[1] = 2;
  v[2] = 3;
  v[3] = 4;
  v[4] = 5;

  for (i = 0; i < 5; i++)
  {
    cout << "O valor de v[" << i << "] eh: " << v[i] << endl;
  }

  cout << "O endereco de v eh: " << v << endl;
  delete [] v;

  return 0;
  
}