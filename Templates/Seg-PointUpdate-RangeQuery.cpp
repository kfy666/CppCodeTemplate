//线段树 单点修改 区间查询
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e5+5;
ll n, a[N], d[N]；

void build(ll l, ll r, ll p)
{
	if(l == r)
	{
		d[p] = a[l];
		return ;
	}
	ll mid = (l + r) >> 1;
	build(l, mid, p << 1);
	build(mid + 1, r, p <<1 | 1);
	d[p] = d[p << 1]+d[p << 1 | 1];
}

void update(ll p, ll l, ll r, ll pos, ll v)
{
	if(l == r && l == pos)
	{
		d[p] = v;
		return ;
	}
	ll mid = (l + r) >> 1;
	if(pos <= mid) update(p << 1, l, mid, pos, v);
	else update(p << 1 | 1, mid + 1, r, pos, v);
	d[p] = d[p << 1]+d[p << 1 | 1];
}

ll query(ll p, ll l, ll r, ll ql, ll qr)
{
	if(ql <= l && qr >= r) return d[p];
	ll mid = (l + r) >> 1, res = 0;
	if(ql <= mid) res += query(p << 1, l, mid, ql, qr);
	if(qr >= mid + 1) res += query(p << 1 | 1, mid + 1, r, ql, qr);
	return res;
}

int main()
{
	scanf("%lld", &n);
	for(ll i = 1;i <= n;i++)
	{
		scanf("%lld", a + i);
	}
	build(1, n, 1);
	return 0;
}
