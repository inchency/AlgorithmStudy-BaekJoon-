//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//void dfs_solve(int from, vector<vector<int>>&adj, vector<int>&color);
//bool answer_flag = false;
//
//int main() {
//	int K, V, E;
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> V >> E;
//		vector<vector<int>>adj(V + 1);
//		for (int j = 0; j < E; j++) {
//			int a, b;
//			cin >> a >> b;
//			adj[a].push_back(b);
//			adj[b].push_back(a);
//		}
//		vector<int>color(V + 1, 0);
//		color[1] = 1;
//		answer_flag = false;
//		int start_v = 1;
//		bool is_go = true;
//		while (is_go) {
//			is_go = false;
//			dfs_solve(start_v, adj, color);
//			for (int i = 1; i < color.size(); i++) {
//				if (color[i] == 0) {
//					start_v = i;
//					is_go = true;
//					color[i] = 1;
//					break;
//				}
//			}
//		}
//
//		if (!answer_flag)
//			cout << "YES\n";
//		else
//			cout << "NO\n";
//		/*for (int i = 1; i < adj.size(); i++) {
//		for (int j = 0; j < adj[i].size(); j++) {
//		cout << adj[i][j] << " ";
//		}
//		cout << endl;
//		}*/
//	}
//	return 0;
//}
//
//void dfs_solve(int from, vector<vector<int>>&adj, vector<int>&color) {
//	for (int i = 0; i < adj[from].size(); i++) {
//		if (color[adj[from][i]] == 0) {
//			int to_color = color[from] * -1;
//			color[adj[from][i]] = to_color;
//			dfs_solve(adj[from][i], adj, color);
//		}
//		else if (color[adj[from][i]] == color[from]) answer_flag = true;
//	}
//	return;
//}