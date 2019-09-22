//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//void bfs(vector<vector<int>>map, vector<vector<bool>>visit);
//
//int main() {
//	int w, h; // 너비, 높이
//	cin >> w >> h;
//	while (w != 0 && h != 0) {
//		vector<vector<int>>map(h, vector<int>(w, 0));
//		vector<vector<bool>>visit(h, vector<bool>(w, false));
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> map[i][j];
//			}
//		}
//		bfs(map, visit);
//		cin >> w >> h;
//	}
//	return 0;
//}
//
//
//void bfs(vector<vector<int>>map, vector<vector<bool>>visit){
//	int answer = 0;
//	int start_x, start_y;
//	int next[8][2] = {
//		{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}
//	};
//	for (int i = 0; i < map.size(); i++) {
//		for (int j = 0; j < map[i].size(); j++) {
//			if (map[i][j] == 1 && !visit[i][j]) {
//				answer++;
//				start_x = i;
//				start_y = j;
//				visit[start_x][start_y] = true;
//				queue < pair<int, int>>q;
//				q.push(make_pair(start_x, start_y));
//				while (!q.empty()) {
//					int current_x = q.front().first;
//					int current_y = q.front().second;
//					q.pop();
//					for (int i = 0; i < 8; i++) {
//						int next_x = current_x + next[i][0];
//						int next_y = current_y + next[i][1];
//						if (next_x >= 0 and next_x < map.size() and next_y >= 0 and next_y < map[0].size()) { // 맵 안에 있는 경우
//							if (!visit[next_x][next_y] && map[next_x][next_y] == 1) {
//								visit[next_x][next_y] = true;
//								q.push(make_pair(next_x, next_y));
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	cout << answer << endl;
//}