//快读
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n;

void read(int &r)
{
	int f = 1;//f是符号变量
	r = 0;//将目标r赋值为0
	char ch = getchar();//ch读入单个字符
	while(ch < '0' || ch > '9')//不是数字
	{
		if(ch == '-') f = -1;//负号
		ch = getchar();
	}
	while(ch >= '0' && ch <= '9')//是数字
	{
		r = (r << 3) + (r << 1) + (ch ^ 48);//位运算加快操作, 等效于r = r * 10 + ch - '0'
		ch = getchar();
	}
	r = f * r;
}

int main()
{
	read(n);
	return 0;
}
