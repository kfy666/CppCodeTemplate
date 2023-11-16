//插入排序
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int a[N], n;

void insertion_sort()//默认从小到大排序
{
	for(int i = 1; i <= n; i++)//枚举每个未排序的位置
	{
	    int key = a[i];//用key记录当前位置值
    	int j = i - 1;
    	while(j >= 1 && a[j] > key)//寻找大于key的值
		{
      		a[j + 1] = a[j];//向后赋值
      		j--;
    	}
    	a[j + 1] = key;//赋值为key, 完成一次插入
  	}
}

int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", a + i);
	}
	insertion_sort();
	for(int i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

