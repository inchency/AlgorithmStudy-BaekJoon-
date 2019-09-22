//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void preorder(vector<pair<int, int>>&bt, int current_node) {
//	cout << char(current_node+'A');
//	if(bt[current_node].first != -1)
//		preorder(bt, bt[current_node].first);
//	if(bt[current_node].second != -1)
//		preorder(bt, bt[current_node].second);
//}
//void inorder(vector<pair<int, int>>&bt, int current_node) {
//	if (bt[current_node].first != -1)
//		inorder(bt, bt[current_node].first);
//	cout << char(current_node + 'A');
//	if (bt[current_node].second != -1)
//		inorder(bt, bt[current_node].second);
//}
//void postorder(vector<pair<int, int>>&bt, int current_node){
//	if (bt[current_node].first != -1)
//		postorder(bt, bt[current_node].first);
//	if (bt[current_node].second != -1)
//		postorder(bt, bt[current_node].second);
//	cout << char(current_node + 'A');
//}
//
//int main(){
//	int N;
//	cin >> N;
//	vector<pair<int,int>>bt(N);
//	for (int i = 0; i < N; i++) {
//		char parent, left, right;
//		cin >> parent >> left >> right;
//		if(left != '.')
//			bt[parent - 'A'].first = left - 'A';
//		else
//			bt[parent - 'A'].first = -1;
//		if(right != '.')
//			bt[parent - 'A'].second = right - 'A';
//		else
//			bt[parent - 'A'].second = -1;
//	}
//	preorder(bt, 0);
//	cout << endl;
//	inorder(bt, 0);
//	cout << endl;
//	postorder(bt, 0);
//	return 0;
//}