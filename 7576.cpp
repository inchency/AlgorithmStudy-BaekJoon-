//#include <iostream>
//#include <queue>
//#include <stack>
//
//using namespace std;
//
//void bfs(vector<vector<int>>&box, vector<vector<bool>>&visit);
//
//int main() {
//	int M, N;
//	cin >> N >> M;
//	vector<vector<int>>box(M, vector<int>(N, 0));
//	vector<vector<bool>>visit(M, vector<bool>(N, false));
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> box[i][j];
//		}
//	}
//
//	bfs(box, visit);
//
//	/*for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << box[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	return 0;
//}
//
//void bfs(vector<vector<int>>&box, vector<vector<bool>>&visit) {
//	bool all_good = true;
//	for (int i = 0; i < box.size(); i++) {
//		if (!all_good) break;
//		for (int j = 0; j < box[0].size(); j++) {
//			if (box[i][j] != 1) {
//				all_good = false;
//				break;
//			}
//		}
//	}
//	if (all_good) cout << 0;
//	else {
//		int answer = 0;
//		int to_xy[4][2] = {
//			{-1, 0}, {0, 1}, {1, 0}, {0, -1}
//		};
//		queue<pair<pair<int, int>, int>>q; // 좌표, 좌표, 시간
//		for (int i = 0; i < box.size(); i++) {
//			for (int j = 0; j < box[0].size(); j++) {
//				if (box[i][j] == 1) {
//					q.push(make_pair(make_pair(i, j), 0));
//					visit[i][j] = true;
//				}
//			}
//		}
//		while (!q.empty()) {
//			int current_time = q.front().second;
//			int current_x = q.front().first.first;
//			int current_y = q.front().first.second;
//			
//			if (answer < current_time) answer = current_time;
//			q.pop();
//			for (int i = 0; i < 4; i++) {
//				int next_x = current_x + to_xy[i][0];
//				int next_y = current_y + to_xy[i][1];
//				if (next_x >= 0 && next_x < box.size() && next_y >= 0 && next_y < box[0].size()) { // box 안에 있으면
//					if (box[next_x][next_y] == 0 && !visit[next_x][next_y]) {
//						q.push(make_pair(make_pair(next_x, next_y), current_time+1));
//						visit[next_x][next_y] = true;
//						box[next_x][next_y] = 1;
//					}
//				}
//			}
//		}
//
//		for (int i = 0; i < box.size(); i++) {
//			for (int j = 0; j < box[0].size(); j++) {
//				if (box[i][j] == 0) {
//					cout << -1;
//					return;
//				} 
//			}
//		}
//		cout << answer;
//	}
//}