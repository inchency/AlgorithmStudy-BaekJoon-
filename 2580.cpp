//#include <iostream>
//#include <vector>
//#include <tuple>
//
//using namespace std;
//
//bool flag = false; // 스도쿠를 성공적으로 다 채우면 BackTracking 종료
//
//bool IsOk(vector<vector<int>>&v, int y, int x, int target, vector<vector<bool>>&check_row, vector<vector<bool>>&check_col, vector<vector<vector<bool>>>&check2) {
//	if (check_row[y][target]) return false;
//	if (check_col[x][target]) return false;
//	if (check2[y / 3][x / 3][target]) return false;
//	return true;
//}
//
//void BackTracking(vector<vector<int>>&v, int y, int x, int total_zero_cnt, vector<vector<bool>>&check_row, vector<vector<bool>>&check_col, vector<vector<vector<bool>>>&check2) {
//	for (int i = y, j = x; i < 9;) {
//		if (j == 9) {
//			if (i + 1 == 9) return;
//			i++;
//			j = 0;
//		}
//		for (; j < 9; j++) {
//			if (v[i][j] == 0) {
//				bool correct_flag = false;
//				for (int k = 1; k <= 9; k++) {
//					if (IsOk(v, i, j, k - 1, check_row, check_col, check2)) {
//						correct_flag = true;
//						v[i][j] = k;
//						check_row[i][k - 1] = true;
//						check_col[j][k - 1] = true;
//						check2[i / 3][j / 3][k - 1] = true;
//						if (--total_zero_cnt == 0) {
//							flag = true;
//							return;
//						}
//						BackTracking(v, i, j + 1, total_zero_cnt, check_row, check_col, check2);
//						correct_flag = false;
//						if (flag) return;
//						total_zero_cnt++;
//						v[i][j] = 0;
//						check_row[i][k - 1] = false;
//						check_col[j][k - 1] = false;
//						check2[i / 3][j / 3][k - 1] = false;
//					}
//				}
//				if (!correct_flag) return;
//			}
//		}
//	}
//}
//
//int main() {
//	vector<vector<int>>v(9, vector<int>(9, 0));
//	vector<vector<bool>>check_row(9, vector<bool>(9, false)); // 가로 
//	vector<vector<bool>>check_col(9, vector<bool>(9, false)); // 가로 체크용
//	vector<vector<vector<bool>>>check2(3, vector<vector<bool>>(3, vector<bool>(9, false))); // 3 * 3 * 9 (9개의 파트 확인용)
//
//	int total_zero_cnt = 0; // 첫 0의 개수
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < v[i].size(); j++) {
//			cin >> v[i][j];
//			if (v[i][j] == 0) total_zero_cnt++;
//			else {
//				check_row[i][v[i][j] - 1] = true;
//				check_col[j][v[i][j] - 1] = true;
//				check2[i / 3][j / 3][v[i][j] - 1] = true;
//			}
//		}
//	}
//	BackTracking(v, 0, 0, total_zero_cnt, check_row, check_col, check2);
//	cout << endl;
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}