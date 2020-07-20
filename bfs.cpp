#include<bits/stdc++.h>
using namespace std;

vector <bool> visited;
vector <vector<int> > g;

void edge (int a, int b)
{
	g[a].push_back(b);
}

void bfs(int u)
{
	queue <int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()) {
		int f=q.front();
		q.pop();
		cout << f << "->";
		// Enqueue all adjacent of f and mark them visited
		for (auto i = g[f].begin(); i != g[f].end();++i) {
			if (!visited[*i]) {
				q.push(*i);
				visited[*i] = true;
			}
		}
	}
}

int main()
{
	int nodes,edges;
	cin >> nodes;
	cin >> edges;
	visited.assign(n,false); 
	g.assign(n, vector<int>());
	int a, b;
	for (int i=0;i<e;i++) {
		cin >> a >> b;
		edge(a,b);
	}
	for (int i=0; i<n;i++) {
		if (!v[i])
			bfs(i);
	}
	return 0;
} 
