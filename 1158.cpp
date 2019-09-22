//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void solve(int N, int K) {
//	cout << "<";
//	vector<int>v(N+1, 0);
//	for (int i = 1; i <= N; i++) {
//		v[i] = i;
//	}
//	auto it = v.begin();
//	while (v.size() != 1) {
//		for (int i = 0; i < K; i++) {
//			it++;
//			if (it == v.end()) { // 사이즈 넘어가면
//				it = v.begin() + 1;
//			}
//		}
//		if (v.size() != 2)
//			cout << *it << ", ";
//		else
//			cout << *it;
//		auto temp_it = it-1;
//		v.erase(it);
//		it = temp_it;
//	}
//	cout << ">";
//}
//
//int main() {
//	int N, K;
//	cin >> N >> K;
//	solve(N, K);
//	return 0;
//}