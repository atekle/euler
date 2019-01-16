#include <iostream>

using namespace std;

int main(void) {
  int result = 0;

  int a = 0, b = 0;

  for (int i = 1; i <= 100; i++) {
    a += i;
    b += i*i;
  }
  result = a*a-b;

  cout << result << endl;

  return 0;
}
