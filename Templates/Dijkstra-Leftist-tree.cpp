//Dijkstra求最短路,左偏树维护
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 5, M = 2e5 + 5;

ll dis[N], val[N], ver[M], ls[M], rs[M], dep[M], rt, book[N], cnt;
ll tot = -1, head[N];
ll n, m, s;

struct Edge
{
	ll ne, to, w;
}e[N << 1];//e存边

void add(ll u, ll v, ll w)//加边
{
	++tot;
	e[tot].to = v, e[tot].w = w, e[tot].ne = head[u], head[u] = tot;
}

ll merge(ll x, ll y)//左偏树的merge操作
{
	if(!x || !y) return x + y;
	if(val[y] < val[x]) swap(x, y);
	rs[x] = merge(rs[x], y);
	if(dep[ls[x]] < dep[rs[x]]) swap(ls[x], rs[x]);
	dep[x] = dep[rs[x]] + 1;
	return x;
}

void dijkstra(ll s)//最短路
{
	memset(dis, 0x3f, sizeof(dis));
	dis[s] = 0;
	val[++cnt] = 0;
	ver[cnt] = s;
	rt = merge(0, cnt);
	while(rt)
	{
		while(rt && book[ver[rt]])
		{
			rt=merge(ls[rt], rs[rt]);
		}
		if(rt == 0) break;
		ll u = ver[rt];
		book[u] = 1;
		for(ll i = head[u]; ~i; i = e[i].ne)//遍历u的出边, 此处用~i判断head[i]是否为-1(空)
		{
			ll v = e[i].to;
			if(book[v]) continue;
			if(dis[v] > dis[u] + e[i].w)//松弛
			{
				dis[v] = dis[u] + e[i].w;
				val[++cnt] = dis[v];
				ver[cnt] = v;
				rt = merge(rt, cnt);
			}
		}
	}
	return ;
}

int main()
{
	memset(head, -1, sizeof(head));//数组初始化为-1, 防止内存读取时出错
	scanf("%lld%lld%lld", &n, &m, &s);//输入点数n, 边数m, 源点s
	for(ll i = 1; i <= m; i++)//读入边
	{
		ll u, v, w;
		scanf("%lld%lld%lld", &u, &v, &w);
		add(u, v, w);
	}
	dijkstra(s);
	for(ll i = 1; i <= n; i++)//输出各点到s的距离
	{
		printf("%lld ", dis[i]);
	}
	return 0;
}
