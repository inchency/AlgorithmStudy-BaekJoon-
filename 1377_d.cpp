//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int>a(n+1, 0);
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	bool change = false;
//	for (int i = 1; i <= n + 1; i++) {
//		change = false;
//		for (int j = 1; j <= n - i; j++) {
//			if (a[j] > a[j + 1]) {
//				change = true;
//				swap(a[j], a[j + 1]);
//			}
//		}
//		if (change == false) {
//			cout << i << '\n';
//			break;
//		}
//	}
//}