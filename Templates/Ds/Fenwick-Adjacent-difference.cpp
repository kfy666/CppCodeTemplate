//差分树状数组
#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
typedef long long LL:
using namespace std;

const LL N = 1e6+1;
LL a[N], n, q, l, r, y, op;
LL t1[N], d[N], t2[N];

void upd1(LL x, LL v)
{
	while(x <= N)
	{
		t1[x] += v;
		x += lowbit(x);
	}
}

void upd2(LL x, LL v)
{
	LL i = x;
	while(x <= N)
	{
		t2[x] += i * v;
		x += lowbit(x);
	}
}

LL query1(LL x)
{
	lld s = 0;
	while(x)
	{
		s += t1[x];
		x -= lowbit(x);
	}
	return s;
}

LL query2(LL x)
{
	LL s = 0;
	while(x)
	{
		s += t2[x];
		x -= lowbit(x);
	}
	return s;
}

LL ZoneQuery(LL l, LL r)//区间查询
{
	return (query1(r) * (r + 1) - query2(r)) - (query1(l - 1) * (l) - query2(l - 1));
}

int main()
{
	return 0;
}
