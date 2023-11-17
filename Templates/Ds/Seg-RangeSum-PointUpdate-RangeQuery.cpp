//线段树维护区间和 单点修改 区间查询
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1e5 + 5;
LL n, a[N], d[N << 2];//a是原数组, d是存线段树的数组

void build(LL l, LL r, LL p)//建树
{
	if(l == r)//叶子, 直接赋值
	{
		d[p] = a[l];
		return ;
	}
	LL mid = (l + r) >> 1;//取区间中点
	build(l, mid, p << 1);//递归建左子树, p << 1表示p * 2,为左子树
	build(mid + 1, r, p << 1 | 1);//递归建右子树, p << 1 | 1表示p * 2 + 1, 为右子树
	d[p] = d[p << 1] + d[p << 1 | 1];//左右子树和
}

void update(LL p, LL l, LL r, LL pos, LL v)//单点修改
{
	if(l == r && l == pos)//到达目标位置
	{
		d[p] = v;
		return ;
	}
	LL mid = (l + r) >> 1;//取区间中点
	if(pos <= mid) update(p << 1, l, mid, pos, v);//目标在左子树
	else update(p << 1 | 1, mid + 1, r, pos, v);//目标在右子树
	d[p] = d[p << 1] + d[p << 1 | 1];//左右子树和
}

LL query(LL p, LL l, LL r, LL ql, LL qr)//区间查询, l, r为当前区间, ql, qr为目标区间
{
	if(ql <= l && qr >= r) return d[p];//到达叶子节点, 直接返回值
	LL mid = (l + r) >> 1, res = 0;//取区间中点
	if(ql <= mid) res += query(p << 1, l, mid, ql, qr);//待查区间全部或有一部分在左子树内, 进入左子树查询
	if(qr >= mid + 1) res += query(p << 1 | 1, mid + 1, r, ql, qr);//待查区间全部或有一部分在右子树内, 进入右子树查询
	return res;//累加
}

int main()
{
	scanf("%lld", &n);
	for(LL i = 1; i <= n; i++)//读入原数组
	{
		scanf("%lld", a + i);
	}
	build(1, n, 1);//建树
	//update(1, 1, n, pos,v);//将位置pos的值修改为v
	//query(1, 1, n, l, r);//查询l~r的区间和
	return 0;
}
