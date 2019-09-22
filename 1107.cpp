//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int target, min_result = 99999999;
//bool exit_flag = false;
//
//int solve(int cur, vector<int>&can_use_vec, int cur_press_cnt) {
//	int	result = cur_press_cnt + abs(target - cur);
//	return result;
//}
//
//
//int main() {
//	string line;
//	int break_cnt;
//	cin >> target >> break_cnt;
//	vector<int>break_vec(break_cnt);
//	vector<int>can_use_vec;
//	for (int i = 0; i < break_cnt; i++) {
//		cin >> break_vec[i];
//	}
//	for (int i = 0; i <= 9; i++) {
//		bool flag = false; // true만 고장난 버튼
//		for (int j = 0; j < break_cnt; j++) {
//			if (i == break_vec[j]) {
//				flag = true;
//				break;
//			} 
//		}
//		if (!flag) can_use_vec.push_back(i);
//	}
//	if (target == 100) {
//		cout << 0;
//		return 0;
//	}
//	else {
//		min_result = abs(target - 100);
//		int cur = 0, press_cnt = 0;
//		for (int i = 0; i <= 500000*2; i++) {
//			int temp = i;
//			vector<int>t;
//			// 버튼 만들 수 있는지 확인
//			do {
//				t.push_back(temp % 10);
//			} while (temp = temp / 10);
//			bool exist_flag = true;
//			for (int k = 0; k < t.size(); k++) {
//				bool temp_flag = false;
//				for (int j = 0; j < can_use_vec.size(); j++) {
//					if (t[k] == can_use_vec[j]) {
//						temp_flag = true;
//						break;
//					}
//				}
//				if (!temp_flag) {
//					exist_flag = false;
//					break;
//				}
//			}
//			if (i == 500000) { // 디버깅용
//				int a = 1;
//			}
//			// 버튼 만들 수 있으면
// 			if (exist_flag) {
//				int temp_cnt = 1;
//				int temp = i;
//				while (temp / 10) {
//					temp = temp / 10;
//					temp_cnt++;
//				}
//				press_cnt = temp_cnt;
//				min_result = min(min_result, solve(i, can_use_vec, press_cnt));
//			}
//		}
//		cout << min_result << endl;
//	}
//	return 0;
//}