#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+5;
int n;

void read(int &r)
{
	int f = 1;
	r = 0;
	char ch = getchar();
	while(ch < '0' || ch > '9')
	{
		if(ch == '-') f = -1;
		ch = getchar();
	}
	while(ch >= '0' && ch <= '9')
	{
		r=(r << 3) + (r << 1) + (ch ^ 48);
		ch = getchar();
	}
	r = f * r;
}

int main()
{
	read(n);
	return 0;
}
