//FloydÇó×î¶ÌÂ·
#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;

int dis[N][N], n;

void floyd()
{
	for(int k = 1; k <= n; k++)
	{
		for(int x = 1; x <= n; x++)
		{
			for(int y = 1; y <= n; y++)
			{
				dis[x][y] = min(dis[x][y], dis[x][k] + dis[k][y]);
			}
		}
	}
}

int main()
{
	return 0;
}
