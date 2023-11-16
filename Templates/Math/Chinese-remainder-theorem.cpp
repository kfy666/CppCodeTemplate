#include<bits/stdc++.h>
typedef long long LL;
using namespace std;

LL exgcd(LL a, LL b, LL &x, LL &y)
{
	if(!b)
	{
    	x = 1;
    	y = 0;
    	return a;
  	}
	LL d = exgcd(b, a % b, x, y);
	LL t = x;
	x = y;
	y = t - (a / b) * y;
  	return d;
}

LL mods[15], arr[15], n;

LL CRT(LL k, LL* a, LL* r)
{
	LL n = 1, ans = 0;
  	for(LL i = 1; i <= k; i++)
	{
		n = n * r[i];
	}
  	for(LL i = 1; i <= k; i++)
	{
    	LL m = n / r[i];
    	LL b, y;
    	exgcd(m, r[i], b, y);// b * m mod r[i] = 1
    	ans = (ans + a[i] * m * b % n) % n;
  	}
  	return (ans % n + n) % n;
}


int main()
{
	scanf("%lld", &n);
    for(int i =1 ; i <= n; i++)
	{
		scanf("%lld%lld", mods + i, arr + i);
	}
    printf("%lld\n", CRT(n, arr, mods));
	return 0;
}
