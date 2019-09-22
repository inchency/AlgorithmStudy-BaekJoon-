//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//class Number {
//public:
//	int first;
//	int second;
//};
//
//bool cmp(Number a, Number b);
//
//int main() {
//	int testCases;
//	cin >> testCases;
//	vector<Number>num(testCases);
//	for (int i = 0; i < testCases; i++) {
//		Number number;
//		cin >> number.first >> number.second;
//		num[i] = number;
//	}
//
//	sort(num.begin(), num.begin() + testCases, cmp);
//
//	for (int i = 0; i < num.size(); i++) {
//		cout << num[i].first << " " << num[i].second << "\n";
//	}
//	return 0;
//}
//
//bool cmp(Number a, Number b) {
//	if (a.second == b.second) {
//		if (a.first < b.first) return true;
//		return false;
//	}
//	else {
//		if (a.second < b.second) return true;
//		return false;
//	}
//}