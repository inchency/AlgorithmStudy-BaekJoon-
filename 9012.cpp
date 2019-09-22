//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//bool is_pal(string ps);
//
//int main() {
//	int T;
//	cin >> T;
//	string ps;
//	while (T--) {
//		cin >> ps;
//		if (is_pal(ps)) cout << "YES\n";
//		else cout << "NO\n";
//	}
//	return 0;
//}
//
//bool is_pal(string ps) {
//	stack<char>st;
//	for (int i = 0; i < ps.size(); i++) {
//		if (ps[i] == '(') 
//			st.push(ps[i]);
//		else {
//			if (st.empty()) return false;
//			else {
//				if(st.top() == '(') st.pop();
//				else return false;
//			}
//			
//		}
//	}
//	if(st.empty()) return true;
//	else return false;
//}