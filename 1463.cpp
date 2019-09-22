//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	vector<int>v(N + 1, 0);
//	for (int i = 2; i <= N; i++) {
//		int min_num = -1;
//		if (i % 3 == 0)
//			min_num = v[i / 3] + 1;
//		if (i % 2 == 0) {
//			if (min_num != -1)
//				min_num = min_num > v[i / 2] + 1 ? v[i / 2] + 1 : min_num;
//			else
//				min_num = v[i / 2] + 1;
//		}
//		if (min_num != -1)
//			min_num = min_num > v[i - 1] + 1 ? v[i - 1] + 1 : min_num;
//		else
//			min_num = v[i - 1] + 1;
//		v[i] = min_num;
//	}
//	cout << v[v.size() - 1];
//}