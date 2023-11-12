#include <bits/stdc++.h>
#define lld long long
#define lowbit(x) (x&-x)
using namespace std;

const int N = 1e5 + 10;
int ls[N], rs[N], val[N], dist[N];

int merge(int x, int y){//x、y: 堆顶节点 
	if(val[y] < val[x] || (val[x] == val[y] && y < x))	swap(x, y);
	rs[x] = merge(rs[x], y);
	if(dist[ls[x]] < dist[rs[x]]) swap(ls[x], rs[x]);
	dist[x] = dist[rs[x]] + 1;
	return x;
}

void pop(int u) {
	del[u] = true;
	fa[ls[u]] = ls[u];
	fa[rs[u]] = rs[u];
	// 先把左右儿子拆出去
	fa[u] = merge(ls[u], rs[u]);
	// 然后合并为一个新堆
}

int main()
{cin.tie(NULL);cout.tie(NULL);ios::sync_with_stdio(false);
	
	return 0;
}
