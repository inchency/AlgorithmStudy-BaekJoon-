//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//void solve(vector<int>table) {
//	vector<bool>visit(table.size(), false);
//	queue<int>q;
//	int answer = 0;
//	for (int i = 1; i < table.size(); i++) {
//		if (!visit[i]) {
//			q.push(i);
//			visit[i] = true;
//			while (!q.empty()) {
//				int current = q.front();
//				q.pop();
//				int next = table[current];
//				if (!visit[next]) {
//					visit[next] = true;
//					q.push(next);
//				}
//				else {
//					answer++;
//				}
//			}
//		}
//	}
//	cout << answer << "\n";
//}
//
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int N;
//		cin >> N;
//		vector<int>table(N + 1);
//		for (int i = 1; i <= N; i++) 
//			cin >> table[i];
//		solve(table);
//	}
//	return 0;
//}
