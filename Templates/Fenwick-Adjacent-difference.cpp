#include<
#define lowbit(x) (x&-x)
#define lld long long
#define int long long
using namespace std;

const int N = 1e6+1;
int a[N],n,q,l,r,y,op;lld t1[N], d[N], t2[N];

void upd1(int x, int v){
	while(x<=N){
		t1[x]+=v;
		x=x+lowbit(x);
	}
}

void upd2(int x, int v){
	int i=x;
	while(x<=N){
		t2[x]+=i*v;
		x=x+lowbit(x);
	}
}

lld query1(int x){
	lld s=0;
	while(x){
		s+=t1[x];
		x-=lowbit(x);
	}
	return s;
}

lld query2(int x){
	lld s=0;
	while(x){
		s+=t2[x];
		x-=lowbit(x);
	}
	return s;
}

lld ZoneQuery(int l, int r){
	return (query1(r)*(r+1)-query2(r))-(query1(l-1)*(l)-query2(l-1));
}

signed main()
{cin.tie();
	scanf("%lld %lld",&n,&q);
	for(int i=1;i<=n;i++){
		scanf("%lld",a+i);
		d[i]=a[i]-a[i-1];
		upd1(i,d[i]);
		upd2(i,d[i]);
	}
	while(q--){
		scanf("%lld %lld %lld",&op,&l,&r);
		if(op==2){
			printf("%lld\n",ZoneQuery(l,r));
		}
		else{
			scanf("%lld",&y);
			d[l]+=y;
			d[r+1]-=y;
			upd1(l,y);
			upd2(l,y);
			upd1(r+1,-y);
			upd2(r+1,-y);
		}
	}
	return 0;
}
