#include <iostream>

using namespace std;

int main(void) {
  int result = 1;

  long n = 600851475143;

  for (long a = 2; a*a <= n; a++)
    while (n % a == 0) {
      n = n / a;
      result = a;
    }

  result = (n > result) ? n : result;

  cout << result << endl;

  return 0;
}
