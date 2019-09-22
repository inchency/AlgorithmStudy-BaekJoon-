//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//vector<int> bfs(vector<vector<int>>&table) {
//	vector<bool>visit(table.size(), false);
//	queue<int>q;
//	q.push(1);
//	visit[1] = true;
//	vector<int>parent(table.size());
//	while (!q.empty()) {
//		int current_ind = q.front();
//		q.pop();
//		visit[current_ind] = true;
//		for (int i = 0; i < table[current_ind].size(); i++) {
//			if (!visit[table[current_ind][i]]) {
//				parent[table[current_ind][i]] = current_ind;
//				q.push(table[current_ind][i]);
//			}
//		}
//	}
//	return parent;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	vector<vector<int>>table(N+1);
//	for (int i = 0; i < N - 1; i++) {
//		int a, b;
//		cin >> a >> b;
//		table[a].push_back(b);
//		table[b].push_back(a);
//	}
//	vector<int>parent = bfs(table);
//	for (int i = 2; i < parent.size(); i++) {
//		cout << parent[i] << " ";
//	}
//	return 0;
//}