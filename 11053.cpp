//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	vector<pair<int, int>>dp(N + 1, make_pair(0, 1)); // ¼ö¿­, dp
//	for (int i = 1; i <= N; i++) {
//		cin >> dp[i].first;
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j < i; j++) {
//			if (dp[i].first > dp[j].first) {
//				dp[i].second = dp[i].second < dp[j].second + 1 ? dp[j].second + 1 : dp[i].second;
//			}
//		}
//	}
//	int answer = 0;
//	for (int i = 1; i < dp.size(); i++) 
//		answer = answer < dp[i].second ? dp[i].second : answer;
//	cout << answer;
//	return 0;
//}