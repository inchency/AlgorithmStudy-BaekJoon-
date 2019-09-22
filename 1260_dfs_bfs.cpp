//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//void dfs(int from, vector<vector<int>>&adj, vector<bool>&visited);
//void bfs(int from, vector<vector<int>>&adj);
//
//int main() {
//	int N, M, V;
//	cin >> N >> M >> V;
//	vector<vector<int>> adj(N + 1);
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		adj[a].push_back(b);
//		adj[b].push_back(a);
//	}
//	for (int i = 1; i < adj.size(); i++) {
//		sort(adj[i].begin(), adj[i].end());
//	}
//	/*for (int i = 1; i < adj.size(); i++) {
//		for (int j = 0; j < adj[i].size(); j++) {
//			cout << adj[i][j] << " ";
//		}
//		cout << endl;
//
//	}*/
//	vector<bool>visited(N+1, false);
//	visited[V] = true;
//	dfs(V, adj, visited);
//	cout << endl;
//	bfs(V, adj);
//
//	return 0;
//}
//
//void dfs(int from, vector<vector<int>>&adj, vector<bool>&visited){
//	cout << from << " ";
//	for (int i = 0; i < adj[from].size(); i++) {
//		if (!visited[adj[from][i]]) {
//			visited[adj[from][i]] = true;
//			dfs(adj[from][i], adj, visited);
//		}
//	}
//	return;
//}
//
//void bfs(int from, vector<vector<int>>&adj) {
//	vector<bool>visited(adj.size() + 1, false);
//	visited[from] = true;
//	queue<int>q;
//	q.push(from);
//	while (!q.empty()) {
//		cout << q.front() << " ";
//		from = q.front();
//		q.pop();
//		for (int i = 0; i < adj[from].size(); i++) {
//			if (!visited[adj[from][i]]) {
//				visited[adj[from][i]] = true;
//				q.push(adj[from][i]);
//			}
//		}
//	}
//	return;
//}