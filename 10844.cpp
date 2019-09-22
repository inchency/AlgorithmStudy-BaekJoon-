//#include <iostream>
//#include <vector>
//#define MOD_NUM 1000000000
//
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	vector<vector<long long>>dp(N + 1, vector<long long>(10, 0));
//	for (int j = 1; j <= 9; j++) { // 한자리수 채우기
//		dp[1][j] = 1;
//	}
//	for (int i = 2; i <= N; i++) {
//		for (int j = 0; j <= 9; j++) {
//			if (j == 0) {
//				dp[i][j] = dp[i - 1][1] % MOD_NUM;
//			}
//			else if (j == 9) {
//				dp[i][j] = dp[i - 1][8] % MOD_NUM;
//			}
//			else {
//				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD_NUM;
//			}
//		}
//	}
//	int answer = 0;
//	for (int j = 0; j <= 9; j++) {
//		answer = (answer+dp[N][j]) % MOD_NUM;
//	}
//	cout << answer;
//	return 0;
//}