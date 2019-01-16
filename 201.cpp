#include <iostream>

#define N 100
#define K 50

using namespace std;

int main(void) {
  int result = 0;

  size_t m = 0;
  for (size_t x = N-K+1; x <= N; x++)
    m += x*x;

  int *count = new int[(K+1)*(m+1)];
  for (size_t i = 1; i < (K+1)*(m+1); i++)
    count[i] = 0;
  count[0] = 1;

  for (int x = 1; x <= N; x++)
    for (size_t i = K; i > 0; i--)
      for (size_t j = m; j >= x*x; j--)
        count[(m+1)*i+j] += count[(m+1)*(i-1)+j-x*x];

  for (size_t i = 0; i <= m; i++)
    if (count[(m+1)*K+i] == 1)
      result += i;

  delete[] count;

  cout << result << endl;

  return 0;
}
