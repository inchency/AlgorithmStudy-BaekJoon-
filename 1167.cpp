//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int max_dist = 0;
//int max_node = -1;
//
//void bfs(vector<vector<pair<int, int>>>&table, int start_node, int total_dist) {
//	vector<bool>visit(table.size(), false);
//	queue<int>q;
//	q.push(start_node);
//	visit[1] = true;
//	while (!q.empty()) {
//		int current = q.front();
//		q.pop();
//		for (int i = 0; i < table[current].size(); i++) {
//			int next = table[current][i].first;
//			if (!visit[next]) {
//				visit[next] = true;
//				int next_dist = table[current][i].second;
//				total_dist += next_dist;
//				max_dist = max_dist < total_dist ? total_dist : max_dist;
//				q.push(next);
//			}
//		}
//	}
//}
//
//void dfs(vector<vector<pair<int, int>>>&table, vector<bool>&visit, int start_node, int total_dist) {
//	for (int i = 0; i < table[start_node].size(); i++) {
//		int next = table[start_node][i].first;
//		if (!visit[next]) {
//			visit[next] = true;
//			int next_dist = table[start_node][i].second;
//			//max_dist = max_dist < total_dist + next_dist ? total_dist + next_dist : max_dist;
//			if (max_dist < total_dist + next_dist) {
//				max_dist = total_dist + next_dist;
//				max_node = next;
//			}
//			dfs(table, visit, next, total_dist + next_dist);
//		}
//	}
//}
//
//int main() {
//	int V;
//	cin >> V;
//	vector<vector<pair<int, int>>>table(V + 1);
//	for (int i = 1; i <= V; i++) {
//		int start_node;
//		cin >> start_node;
//		while (1) {
//			int temp, to_node, to_dist;
//			cin >> temp;
//			if (temp == -1) break;
//			else {
//				to_node = temp;
//				cin >> to_dist;
//				table[start_node].push_back(make_pair(to_node, to_dist));
//			}
//		}
//	}
//	//bfs(table, 1, 0);
//	vector<bool>visit(table.size(), false);
//	visit[1] = true;
//	dfs(table, visit, 1, 0);
//	vector<bool>visited(table.size(), false);
//	visited[max_node] = true;
//	max_dist = 0;
//	dfs(table, visited, max_node, 0);
//	cout << max_dist;
//	return 0;
//}