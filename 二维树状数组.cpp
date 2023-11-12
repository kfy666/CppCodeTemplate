#include <bits/stdc++.h>
#define lld long long
#define lowbit(x) (x&-x)
#define int long long
using namespace std;

const int N = 4096 + 6;
int t[N][N], n, m, op, a, b, c, d;

void add(int x, int y, int v){
	for(int i = x; i < N; i += lowbit(i)){
		for(int j = y; j < N; j += lowbit(j)){
			t[i][j] += v;
		}
	}
} 

int sum(int x, int y){
	int s = 0;
	for(int i=x; i>0; i-=lowbit(i)){
		for(int j=y; j>0; j-=lowbit(j)){
			s += t[i][j];
		}
	}
	return s;
}

signed main()
{cin.tie(NULL);cout.tie(NULL);ios::sync_with_stdio(false);
	scanf("%lld %lld", &n, &m);
	while(scanf("%lld", &op) != EOF){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(op == 1){
			add(a, b, c);
		}
		else{
			scanf("%lld", &d);
			printf("%lld\n", sum(c, d) - sum(c, b-1) - sum(a-1, d) + sum(a-1, b-1));
		}
	}
	return 0;
}
