//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	if (N == 1) {
//		cout << 1;
//	}
//	else if (N == 2) {
//		cout << 1;
//	}
//	else {
//		vector<long long>dp(N + 1, 1);
//		for (int i = 3; i <= N; i++) {
//			dp[i] = dp[i - 2] + dp[i - 1];
//		}
//		cout << dp[N];
//	}
//	return 0;
//}