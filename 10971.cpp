//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int W[10][10] = { 0, };
//bool visit[10] = { false, };
//int answer = 10000000;
//int N;
//
//void backTracking(int start, int current, int remains, int cost) { 
//	for (int i = 0; i < N; i++) {
//		if (remains == 0) {
//			if (W[current][start] != 0) {
//				answer = min(answer, cost + W[current][start]);
//				return;
//			}
//		}
//		else {
//			if (!visit[i] && W[current][i] != 0) {
//				visit[i] = true;
//				backTracking(start, i, remains - 1, cost + W[current][i]);
//				visit[i] = false;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> W[i][j];
//		}
//	}
//	visit[0] = true;
//	backTracking(0, 0, N - 1, 0);
//	cout << answer;
//	return 0;
//}