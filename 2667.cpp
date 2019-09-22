//#include <iostream>
//#include <queue>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int bfs(vector<string>&v, vector<pair<int, int>> &go_xy, queue<pair<int, int>>&q, vector<vector<bool>>&visited);
//
//int main() {
//	int N;
//	cin >> N;
//	vector<string>v(N);
//	vector<vector<bool>>visited(N, vector<bool>(N, false));
//	for (int i = 0; i < N; i++) {
//		cin >> v[i];
//	}
//	vector<pair<int, int>> go_xy;
//	go_xy.push_back(make_pair(1, 0));
//	go_xy.push_back(make_pair(0, 1));
//	go_xy.push_back(make_pair(-1, 0));
//	go_xy.push_back(make_pair(0, -1));
//	queue<pair<int, int>>q;
//	int group_cnt = 0;
//	vector<int>answer;
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < v[i].size(); j++) {
//			if (v[i][j] == '1' && !visited[i][j]) {
//				visited[i][j] = true;
//				q.push(make_pair(i, j));
//				answer.push_back(bfs(v, go_xy, q, visited));
//				group_cnt++;
//			}
//		}
//	}
//	sort(answer.begin(), answer.end());
//	cout << group_cnt << "\n";
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i] << "\n";
//	}
//	return 0;
//}
//
//int bfs(vector<string>&v, vector<pair<int, int>> &go_xy, queue<pair<int, int>>&q, vector<vector<bool>>&visited) {
//	int house_cnt = 0;
//	while (!q.empty()) {
//		int start_x = q.front().first;
//		int start_y = q.front().second;
//		q.pop();
//		house_cnt++;
//		for (int i = 0; i < go_xy.size(); i++) {
//			int to_x = start_x + go_xy[i].first;
//			int to_y = start_y + go_xy[i].second;
//			if ((0 <= to_x && to_x < v[0].size()) && ((0 <= to_y && to_y < v.size()))) {
//				if (!visited[to_x][to_y] && v[to_x][to_y] == '1') {
//					visited[to_x][to_y] = true;
//					q.push(make_pair(to_x, to_y));
//				}
//			}
//		}
//	}
//	return house_cnt;
//}
