//线性筛法筛质数
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e5 + 5;

bool vis[N];
LL pri[N], cnt;

void init(LL n)//线性筛法筛质数
{
	vis[0] = vis[1] = 1;
	for(LL i = 2; i <= n; i++)
	{
		if(!vis[i]) pri[cnt++] = i;
		for(LL j = 0; j < cnt; j++)
		{
			if(1LL * i * pri[j] > n) break;
			vis[i * pri[j]] = 1;
			if(i % pri[j] == 0) break;
		}
	}
	return ;
}

int main()
{
	LL ed = 1000000ll;//ed是筛质数的上界
	init(ed);
	for(LL i = 1; i <= min(N, ed); i++)//输出筛出的质数
	{
		if(!vis[i]) printf("%lld ", i);
	}
	return 0;
}
