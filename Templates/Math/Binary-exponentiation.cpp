//快速幂
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL binpow(LL a,LL b)//递归实现
{
	if(b==0) return 1;
	LL res=binpow(a,b/2);
	if(b%2) return res*res*a;
	else return res*res;
}

/*
LL binpow(LL a,LL b)//非递归实现
{
	LL res=1;
	while(b>0)
	{
		if(b&1) res=res*a;
		a=a*a;
		b>>=1;
	}
	return res;
}
*/

int main()
{
	return 0;
}

