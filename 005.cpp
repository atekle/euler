#include <iostream>

int gcd(int a, int b);
int lcm(int a, int b);

using namespace std;

int main(void) {
  int result = 1;

  for (int x = 2; x <= 20; x++)
    result = lcm(result, x);

  cout << result << endl;

  return 0;
}

int gcd(int a, int b) {
  while (b > 0) {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}
