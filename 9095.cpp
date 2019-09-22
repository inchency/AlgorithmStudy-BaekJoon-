//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int T, n;
//	cin >> T;
//	while (T--) {
//		cin >> n;
//		vector<int>dp(n + 1, 0);
//		if (n == 1) cout << 1 << endl;
//		else if (n == 2) cout << 2 << endl;
//		else if (n == 3) cout << 4 << endl;
//		else {
//			dp[1] = 1, dp[2] = 2, dp[3] = 4;
//			for (int i = 4; i <= n; i++) {
//				dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//			}
//			cout << dp[n] << endl;
//		}
//	}
//}