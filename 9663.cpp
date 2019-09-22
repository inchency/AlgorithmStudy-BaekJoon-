//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool check[15], check_1[30], check_2[30];
//int N, answer=0;
//
//void solve(int y) { // x는 진행하고 있는 행의 위치 
//	if (y == N) {
//		answer++;
//	}
//	for (int x = 0; x < N; x++) {
//		if (check[x] || check_1[y - x + N] || check_2[x + y]) {
//			continue;
//		}
//		else {
//			check[x] = true;
//			check_1[y - x + N] = true;
//			check_2[x + y] = true;
//			solve(y + 1);
//			check[x] = false;
//			check_1[y - x + N] = false;
//			check_2[x + y] = false;
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//	solve(0);
//	cout << answer;
//	return 0;
//}