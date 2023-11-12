#include <iostream>
#define int LL
#define LL long long
using namespace std;

int exgcd(int a, int b, int &x, int &y) {
  if (!b) {
    x = 1;
    y = 0;
    return a;
  }
  int d = exgcd(b, a % b, x, y);
  int t = x;
  x = y;
  y = t - (a / b) * y;
  return d;
}

LL mods[15], arr[15];

LL CRT(int k, LL* a, LL* r) {
  LL n = 1, ans = 0;
  for (int i = 1; i <= k; i++) n = n * r[i];
  for (int i = 1; i <= k; i++) {
    LL m = n / r[i];
    LL b, y;
    exgcd(m, r[i], b, y);  // b * m mod r[i] = 1
    ans = (ans + a[i] * m * b % n) % n;
  }
  return (ans % n + n) % n;
}


signed main() {
    int n;
    cin >> n;
    for (int i =1 ; i <= n; i++) cin >> mods[i] >> arr[i];
    cout << CRT(n, arr, mods);
}
