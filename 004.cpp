#include <iostream>

using namespace std;

int main(void) {
  int result = 0;

  for (int a = 110; a < 1000; a += 11)
    for (int b = a; b < 1000; b++) {
      int p = a*b, q = 0;
      while (p > 0) {
        q = 10*q + (p % 10);
        p = p / 10;
      }
      p = a*b;
      if (p == q)
        result = (p > result) ? p : result;
    }

  cout << result << endl;

  return 0;
}
