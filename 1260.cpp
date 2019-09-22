//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(){
//	int N, M, V;
//	cin >> N >> M >> V;
//	vector<vector<int>> adj(N+1);
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		adj[a].push_back(b);
//		adj[b].push_back(a);
//	}
//	for (int i = 1; i < adj.size(); i++) {
//		sort(adj[i].begin(), adj[i].end());
//	}
//
//	for (int i = 1; i < adj.size(); i++) {
//		for (int j = 0; j < adj[i].size(); j++) {
//			cout << adj[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}