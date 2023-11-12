//二维树状数组
#include <bits/stdc++.h>
#define lowbit(x) (x & -x)
typedef long long ll;
using namespace std;

const ll N = 4096 + 6;
ll t[N][N], n, m, op, a, b, c, d;

void add(ll x, ll y, ll v)
{
	for(ll i = x; i < N; i += lowbit(i))
	{
		for(ll j = y; j < N; j += lowbit(j))
		{
			t[i][j] += v;
		}
	}
}

ll sum(ll x,ll y)
{
	ll s = 0;
	for(ll i = x; i > 0; i -= lowbit(i))
	{
		for(ll j = y; j > 0; j -= lowbit(j))
		{
			s += t[i][j];
		}
	}
	return s;
}

int main()
{
	scanf("%lld%lld", &n, &m);
	while(scanf("%lld", &op) != EOF)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		if(op == 1)
		{
			add(a, b, c);
		}
		else
		{
			scanf("%lld", &d);
			printf("%lld\n", sum(c, d) - sum(c, b - 1) - sum(a - 1, d) + sum(a - 1, b - 1));
		}
	}
	return 0;
}
