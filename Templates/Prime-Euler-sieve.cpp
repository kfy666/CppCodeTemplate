//线性筛法筛质数
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 5;

bool vis[N];
ll pri[N], cnt;

void init(ll n)//线性筛法筛质数
{
	vis[0] = vis[1] = 1;
	for(ll i = 2; i <= n; i++)
	{
		if(!vis[i]) pri[cnt++] = i;
		for(ll j = 0; j < cnt; j++)
		{
			if(1ll * i * pri[j] > n) break;
			vis[i * pri[j]] = 1;
			if(i % pri[j] == 0) break;
		}
	}
	return ;
}

int main()
{
	ll ed = 1000000ll;//ed是筛质数的上界
	init(ed);
	for(ll i = 1; i <= min(N, ed); i++)//输出筛出的质数
	{
		if(!vis[i]) printf("%lld ", i);
	}
	return 0;
}
