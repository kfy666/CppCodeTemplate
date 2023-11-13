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

LL ZoneQuery(LL l, LL r)
{
	return (query1(r) * (r + 1) - query2(r)) - (query1(l - 1) * (l) - query2(l - 1));
}

int main()
{
	scanf("%lld%lld", &n, &q);
	for(LL i = 1; i <= n; i++)
	{
		scanf("%lld", a + i);
		d[i] = a[i] - a[i - 1];
		upd1(i, d[i]);
		upd2(i, d[i]);
	}
	while(q--)
	{
		scanf("%lld%lld%lld", &op, &l, &r);
		if(op == 2)
		{
			printf("%lld\n", ZoneQuery(l, r));
		}
		else
		{
			scanf("%lld", &y);
			d[l] += y;
			d[r + 1] -= y;
			upd1(l, y);
			upd2(l, y);
			upd1(r + 1, -y);
			upd2(r + 1, -y);
		}
	}
	return 0;
}
