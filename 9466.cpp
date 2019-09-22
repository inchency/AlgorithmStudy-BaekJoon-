//#include <iostream>
//#include <vector>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//void solve(vector<int>&adj) {
//	queue<int>q;
//	set<int>not_cycle_node;
//	vector<int>visit(adj.size(), 0); // 0: 방문 x 상태, -1: 방문 했는데 팀 안되는 노드, 1 : 방문 했는데 팀 되는 노드, 2: 방문했고 팀인지 아닌지 모르는 노드
//	for (int i = 1; i < adj.size(); i++) {
//		if (visit[i]) continue; // -1 or 1일 때
//		q.push(i);
//		while (!q.empty()) {
//			int current = q.front();
//			visit[current] = 2;
//			q.pop();
//			int next = adj[current];
//			if (!visit[next]) {
//				q.push(next);
//			}
//			else if (visit[next] == 2) { // 사이클 O
//				// 지금까지 지나왔던 노드들은 -1로 바꿔준다.
//				int from_node = i;
//				while (from_node != next) {
//					visit[from_node] = -1;
//					not_cycle_node.insert(from_node);
//					from_node = adj[from_node];
//				}
//				int start = next;
//				// 사이클 노드 확인하기
//				int next2 = adj[start];
//				visit[start] = 1;
//				while (next2 != start) {
//					visit[next2] = 1;
//					next2 = adj[next2];
//				}
//				break;
//			}
//			else {
//				// 지금까지 지나왔던 노드들은 -1로 바꿔준다.
//				int from_node = i;
//				while (from_node != next) {
//					visit[from_node] = -1;
//					not_cycle_node.insert(from_node);
//					from_node = adj[from_node];
//				}
//			}
//		}
//	}
//	/*for (auto it = not_cycle_node.begin(); it != not_cycle_node.end(); it++) {
//		cout << *it << " ";
//	}*/
//	printf("%d\n", not_cycle_node.size());
//}
//
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int n;
//		cin >> n;
//		vector<int>adj(n + 1);
//		for (int i = 1; i <= n; i++) {
//			cin >> adj[i];
//		}
//		solve(adj);
//	}
//	return 0;
//}