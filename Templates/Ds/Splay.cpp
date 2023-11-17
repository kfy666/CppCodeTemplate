#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int rt, tot, fa[N], ch[N][2], val[N], cnt[N], sz[N];

//在改变节点位置后，将节点x的size更新
void maintain(int x)
{
	sz[x] = sz[ch[x][0]] + sz[ch[x][1]] + cnt[x];
}

//判断节点x是父亲节点的左儿子还是右儿子
bool get(int x)
{
	return x == ch[fa[x]][1];
}

//销毁节点x
void clear(int x)
{
	ch[x][0] = ch[x][1] = fa[x] = val[x] = sz[x] = cnt[x] = 0;
}

//旋转
void rotate(int x)
{
	int y = fa[x], z = fa[y], chk = get(x);
	ch[y][chk] = ch[x][chk ^ 1];
	if(ch[x][chk ^ 1]) fa[ch[x][chk ^ 1]] = y;
	ch[x][chk ^ 1] = y;
	fa[y] = x;
	fa[x] = z;
	if(z) ch[z][y == ch[z][1]] = x;
	maintain(y);
	maintain(x);
}

//Splay操作
void splay(int x)
{
	for(int f = fa[x]; f = fa[x], f; rotate(x))
	{
		if(fa[f]) rotate(get(x) == get(f) ? f : x);
	}
	rt = x;
}

//插入操作
void ins(int k)
{
	if(!rt)
	{
		val[++tot] = k;
		cnt[tot]++;
		rt = tot;
		maintain(rt);
		return ;
	}
	int cur = rt, f = 0;
	while(1)
	{
		if (val[cur] == k)
		{
			cnt[cur]++;
			maintain(cur);
			maintain(f);
			splay(cur);
			break;
		}
		f = cur;
		cur = ch[cur][val[cur] < k];
		if(!cur)
		{
			val[++tot] = k;
			cnt[tot]++;
			fa[tot] = f;
			ch[f][val[f] < k] = tot;
			maintain(tot);
			maintain(f);
			splay(tot);
			break;
		}
	}
}

//查询x的排名
int rk(int k)
{
	int res = 0, cur = rt;
	while(1)
	{
		if(k < val[cur]) cur = ch[cur][0];
		else
		{
			res += sz[ch[cur][0]];
			if(k == val[cur])
			{
				splay(cur);
				return res + 1;
			}
			res += cnt[cur];
			cur = ch[cur][1];
		}
	}
}

//查询排名为x的数
int kth(int k)
{
	int cur = rt;
	while(1)
	{
		if(ch[cur][0] && k <= sz[ch[cur][0]]) cur = ch[cur][0];
		else
		{
			k -= cnt[cur] + sz[ch[cur][0]];
			if(k <= 0)
			{
				splay(cur);
				return val[cur];
			}
			cur = ch[cur][1];
		}
	}
}

//查询前驱
int pre()
{
	int cur = ch[rt][0];
	if(!cur) return cur;
	while(ch[cur][1])
	{
		cur = ch[cur][1];
	}
	splay(cur);
	return cur;
}

//查询后继
int nxt()
{
	int cur = ch[rt][1];
	if(!cur) return cur;
	while(ch[cur][0])
	{
		cur = ch[cur][0];
	}
	splay(cur);
	return cur;
}

//合并两棵树
void del(int k)
{
	rk(k);
	if(cnt[rt] > 1)
	{
		cnt[rt]--;
		maintain(rt);
		return ;
	}
	if(!ch[rt][0] && !ch[rt][1])
	{
		clear(rt);
		rt = 0;
		return ;
	}
	if(!ch[rt][0])
	{
		int cur = rt;
		rt = ch[rt][1];
		fa[rt] = 0;
		clear(cur);
		return ;
	}
	if(!ch[rt][1])
	{
		int cur = rt;
		rt = ch[rt][0];
		fa[rt] = 0;
		clear(cur);
		return ;
	}
	int cur = rt, x = pre();
	fa[ch[cur][1]] = x;
	ch[x][1] = ch[cur][1];
	clear(cur);
	maintain(rt);
}

int main()
{
	return 0;
}
