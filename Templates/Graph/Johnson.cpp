// Johnson 全源最短路算法

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int N = 1e4 + 5, M = 1e4 + 5;
int head[N], cnt, vis[N], hdis[N], tot[N], dis[N], n, m;
struct edge {
	int u, v, w, next;
}E[M];
struct node {
	int w, now;
	bool operator < (const node& x) const {
		return w > x.w;
	}
};
priority_queue<node> q;
void add(int u, int v, int w) {
	E[++cnt] = {u, v, w, head[u]};
	head[u] = cnt;
}

bool spfa() {
	int s = 0;
	memset(hdis, 63, sizeof(hdis));
	hdis[s] = 0, vis[s] = 1;
	queue<int> q;
	q.push(s);
	while (q.size()) {
		int u = q.front(); q.pop();
		vis[u] = 0;
		for (int i = head[u]; i; i = E[i].next) {
			int v = E[i].v;
			if (hdis[v] > hdis[u] + E[i].w) {
				hdis[v] = hdis[u] + E[i].w;
				if (!vis[v]) {
					vis[v] = 1;
					q.push(v);
					tot[v]++;
					if (tot[v] == n + 1) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

void input() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		add(u, v, w);
	}
}

void add_edge() {
	for (int i = 1; i <= n; i++) {
		add(0, i, 0);
	}
	if (!spfa()) {
		cout << "-1\n"; //有负环无解
		exit(0);
	}
	for (int u = 1; u <= n; u++) {
		for (int i = head[u]; i; i = E[i].next) {
			E[i].w += hdis[u] - hdis[E[i].v];
		}
	}
}

void dijkstra(int s) {
	for (int i = 1; i <= n; i++) {
		dis[i] = INF;
	}	
	q.push({0, s});
	memset(vis, 0, sizeof(vis));
	dis[s] = 0;
	while (q.size()) {
		node frt = q.top(); q.pop();
		int u = frt.now;
		if (vis[u]) {
			continue;
		}
		vis[u] = 1;
		for (int i = head[u]; i; i = E[i].next) {
			int v = E[i].v;
			if (dis[v] > dis[u] + E[i].w) {
				dis[v] = dis[u] + E[i].w;
				if (!vis[v]) {
					q.push({dis[v], v});
				}
			}
		}
	}
}
main() {
//	int t; cin >> t; while (t--) solve();
	input();
	add_edge();
	for (int i = 1; i <= n; i++) {
		dijkstra(i);
		// 每一轮都是以i为起点的最短路。
	}
	// 复杂度 O(nm log m)
	return 0;
}
