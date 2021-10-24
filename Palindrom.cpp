#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  char c[100000], p;
  string str[100000];
  int i, j, n, m, k = 0, arr[100000], s = 1, k10 = 0, k11, k3 = 0;
  gets(c);
  n = strlen(c);
  sort(c, c + n);
  for (i = 0; i < n; i++)
  {
    if (c[i] != c[i + 1]) k10++;
  }
  for (i = 0; i < k10; i++) arr[i] = 1;
  i = 0; k11 = k10;
  while (k10 != 0) {
    if (c[i] == c[i + 1]) { i++; s++; arr[k] = s; }
    else if (c[i] != c[i + 1]) { s = 1; k++; k10--; i++; }

  }
  for (i = 0; i < k11; i++) {
    if (arr[i] % 2 != 0) k3++;
  }
  if (k3 == 0 || (k3 == 1 && n % 2 != 0)) cout << "YES";
  else cout << "NO";
  return 0;
}
