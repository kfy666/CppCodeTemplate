//冒泡排序
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int a[N], n;

void bubble_sort()//默认从小到大排序
{
  	bool flag = 1;//flag记录数组是否已经有序
  	while(flag)//若flag == 0, 说明没有进行交换, 那么数组已经有序
	{
    	flag = 0;
    	for(int i = 1; i < n; i++)
		{
    		if(a[i] > a[i + 1])//相邻元素逆序
			{
	    	    flag = 1;
	    	    swap(a[i], a[i + 1]);//交换相邻两个元素
      		}
    	}
  	}
}

int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", a + i);
	}
	bubble_sort();
	for(int i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

