#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " even then True.";
  else
    cout << n << " odd then False.";

  return 0;
}