//二维树状数组
#include <bits/stdc++.h>
#define lowbit(x) (x & -x)
typedef long long LL;
using namespace std;

const LL N = 4096 + 6;
LL t[N][N], n, m, op, a, b, c, d;

void add(LL x, LL y, LL v)
{
	for(LL i = x; i < N; i += lowbit(i))
	{
		for(LL j = y; j < N; j += lowbit(j))
		{
			t[i][j] += v;
		}
	}
}

LL sum(LL x,LL y)
{
	LL s = 0;
	for(LL i = x; i > 0; i -= lowbit(i))
	{
		for(LL j = y; j > 0; j -= lowbit(j))
		{
			s += t[i][j];
		}
	}
	return s;
}

LL ZoneQuery(LL a, LL b, LL c,LL d)//二位区间查询
{
	return sum(c, d) - sum(c, b - 1) - sum(a - 1, d) + sum(a - 1, b - 1);
}

int main()
{
	return 0;
}
