//选择排序
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int a[N], n;

void selection_sort()//选择排序, 默认从小到大
{
	for(int i = 1; i < n; i++)//从小到大寻找排名为i的数
	{
    	int ith = i;//用ith记录排名为i的数的下标
    	for(int j = i + 1; j <= n; j++)//从i + 1开始寻找, 因为前面的都是排好序的
		{
    		if(a[j] < a[ith]) ith = j;//如果数组第j个数更小就更新
      	}
    	swap(a[i], a[ith]);//交换数组第i个数与排名为i的数
  	}
}

int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", a + i);
	}
	selection_sort();
	for(int i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

