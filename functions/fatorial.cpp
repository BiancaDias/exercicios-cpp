#include <iostream>
using namespace std;

//retorna n!
long long fatorial(int n) {
  long long f = 1;
  for (int i=n;i>=1;i--)
    f *= i;

  return f;
}


int main() {
  int x, y;
  cin >> x >> y;

  cout << x << "! = " << fatorial(x) << endl;
  cout << y << "! = " << fatorial(y) << endl;
