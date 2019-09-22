//#include <iostream>
//#include <vector>
//#include <stack>
//#include <map>
//#include <unordered_map>
//
//using namespace std;
//
//void solve(int A, int P) {
//	int num_ind = 0;
//	unordered_map<int, int>um;
//	vector<int>v;
//	um[A] = num_ind++;
//	v.push_back(A);
//	int fisrt_appear_overlap_num_index;
//	bool stop_flag = false;
//	while (!stop_flag) {
//		stack<int>n;
//		while (A / 10 >= 1) {
//			int remain = A % 10;
//			A = A / 10;
//			n.push(remain);
//		}
//		n.push(A);
//		int next_number = 0;
//		while (!n.empty()) {
//			int number = n.top(), mul_num = n.top();
//			n.pop();
//			for (int i = 1; i < P; i++) {
//				number = number * mul_num;
//			}
//			next_number += number;
//		}
//		if (um.find(next_number) == um.end()) {
//			um[next_number] = num_ind++;
//			A = next_number;
//			v.push_back(A);
//		}
//		else {
//			fisrt_appear_overlap_num_index = um[next_number];
//			stop_flag = true;
//		}
//	}
//	/*for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;*/
//	cout << fisrt_appear_overlap_num_index;
//}
//
//int main() {
//	int A, P;
//	cin >> A >> P;
//	solve(A, P);
//	return 0;
//}