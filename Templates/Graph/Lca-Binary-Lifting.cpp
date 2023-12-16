//倍增求LCA
#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;

int n, m, s, f[N][21], Logn[N], dep[N];
vector<int> g[N];

void dfs(int cur, int fa)
{
	f[cur][0] = fa;
	dep[cur] = dep[fa] + 1;
	for(int i = 1; i <= Logn[dep[cur]]; i++)
	{
		f[cur][i] = f[f[cur][i - 1]][i - 1];
	} 
	for(int v : g[cur])
	{
		if(v != fa)
		{
			dfs(v, cur);
		}
	}
}

int lca(int x, int y)
{
	if(dep[x] < dep[y]) swap(x, y);
	while(dep[x] > dep[y])
	{
		x = f[x][Logn[dep[x] - dep[y]] - 1];
	}
	if(x == y) return x;
	for(int k = Logn[dep[x]] - 1; k >= 0; k--)
	{
		if(f[x][k] != f[y][k])
		{
			x = f[x][k], y = f[y][k];
		}
	}
	return f[x][0];
}

int main()
{
	scanf("%d%d%d", &n, &m, &s);
	for(int i = 1, x, y; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for(int i = 1; i <= n; i++)
	{
		Logn[i] = Logn[i - 1] + (1 << Logn[i - 1] == i);		
	}
	dfs(s, 0);
	for(int i = 1, x, y; i <= m; i++)
	{
		scanf("%d%d", &x, &y);
		printf("%d\n", lca(x, y));;
	}
	return 0;
}



