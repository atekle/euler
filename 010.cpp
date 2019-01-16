#include <iostream>

#define N 2000000

using namespace std;

int main(void) {
  long result = 0;

  bool sieve[N+1];
  for (int i = 0; i <= N; i++)
    sieve[i] = true;
  for (int i = 2; i*i <= N; i++)
    if (sieve[i])
      for (int j = i*i; j <= N; j += i)
        sieve[j] = false;
  for (int i = 2; i <= N; i++)
    if (sieve[i])
      result += i;

  cout << result << endl;

  return 0;
}
