//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(int a, int b) {
//	if (a < b) return true;
//	else return false;
//}
//
//int solve(vector<int>v) {
//	int s = 0;
//	for (int i = 0; i < v.size() - 1; i++) {
//		s += abs(v[i] - v[i + 1]);
//	}
//	return s;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	vector<int>v(N);
//	for (int i = 0; i < N; i++) 
//		cin >> v[i];
//	sort(v.begin(), v.end(), compare);
//	int answer = -1;
//	do {
//		answer = max(answer, solve(v));
//	} while (next_permutation(v.begin(), v.end()));
//	cout << answer;
//	return 0;
//}