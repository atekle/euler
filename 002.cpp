#include <iostream>

using namespace std;

int main(void) {
  int result = 0;

  int a = 1, b = 2, c;

  while (a < 4000000) {
    if (a % 2 == 0)
      result += a;
    c = a+b;
    a = b;
    b = c;
  }

  cout << result << endl;

  return 0;
}
