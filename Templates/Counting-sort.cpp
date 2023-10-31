//计数排序
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5, W = 1e5 + 5;//W为待排序数据的值域大小

int a[N], n, w, cnt[W], b[N];

void counting_sort()//默认从小到大排序
{
	memset(cnt, 0, sizeof(cnt));
	for(int i = 1; i <= n; i++)
	{
		cnt[a[i]]++;//计算每个数出现次数
	}
	for(int i = 1; i <= w; i++)
	{
		cnt[i] += cnt[i - 1];//求每个数出现次数的前缀和
	}
	for(int i = n; i >= 1; i--)
	{
		b[cnt[a[i]]--] = a[i];//从右至左计算每个数的排名,放入b中
	}
}

int main()
{
	scanf("%d%d", &n, &w);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", a + i);
	}
	counting_sort();
	for(int i = 1; i <= n; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}

