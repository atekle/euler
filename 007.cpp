#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int result = 0;

  vector<int> primes;
  primes.push_back(2);

  for (int x = 3; primes.size() < 10001; x += 2) {
    bool isPrime = true;
    for (size_t i = 0; i < primes.size() && isPrime && primes[i]*primes[i] <= x; i++)
      isPrime = (x % primes[i] != 0);
    if (isPrime)
      primes.push_back(x);
  }

  result = primes.back();

  cout << result << endl;

  return 0;
}
