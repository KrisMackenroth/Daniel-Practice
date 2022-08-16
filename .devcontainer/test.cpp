#include <iostream>
using namespace std;



int main() {
  int cars[10] = {4, 3, 5, 1, 6, 7, 8, 5, 4, 3};


  int answer;
  cout << "Press 1 if gay.\n";
  cin >> answer;

  if (answer == 1) cout << "oh no\n\n";
  if (answer != 1) cout << "lesgo dababy\n\n";

  return 0;
}