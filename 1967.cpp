//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//pair<int, int> bfs(int start_node, vector<vector<pair<int, int>>>&adj) {
//	vector<bool>visit(adj.size(), false);
//	queue<pair<int, int>>q; // 다음 검사해야할 노드, 다음 검사해야할 노드의 길이의 합
//	q.push(make_pair(start_node, 0));
//	int max_dist = 0, max_dist_node;
//	while (!q.empty()) {
//		int current_node = q.front().first;
//		int current_node_dist = q.front().second;
//		q.pop();
//		visit[current_node] = true;
//		for (int i = 0; i < adj[current_node].size(); i++) {
//			int next_node = adj[current_node][i].first;
//			int next_node_dist = adj[current_node][i].second;
//			if (!visit[next_node]) {
//				q.push(make_pair(next_node, current_node_dist + next_node_dist));
//				if (max_dist < current_node_dist + next_node_dist) {
//					max_dist = current_node_dist + next_node_dist;
//					max_dist_node = next_node;
//				}
//			}
//		}
//	}
//	return make_pair(max_dist_node, max_dist); // 최장 노드, 최장 노드까지의 거리
//}
//	
//
//int main() {
//	int n;
//	cin >> n;
//	vector<vector<pair<int, int>>>adj(n + 1); // 다음노드, 거리
//	while (n-- > 1) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		adj[a].push_back(make_pair(b, c));
//		adj[b].push_back(make_pair(a, c));
//	}
//	// 임의로 1부터 시작
//	pair<int,int> get_pair_node = bfs(1, adj);
//	pair<int, int> real_answer_pair = bfs(get_pair_node.first, adj);
//	cout << real_answer_pair.second;
//	return 0;
//}