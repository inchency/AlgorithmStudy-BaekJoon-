#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, target, answer = 0;

void solve(vector<int>&v, int cur_num, int cur_index) {
	if (cur_num == target)
		answer++;
	for (int i = cur_index + 1; i < v.size(); i++) {
		cur_num = cur_num + v[i];
		solve(v, cur_num, i);
		cur_num = cur_num - v[i];
	}
}

int main(){
	cin >> N >> target;
	vector<int>v(N);
	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}
	for (int i = 0; i < v.size(); i++) {
		solve(v, v[i], i);
	}
	cout << answer << endl;
	return 0;
}