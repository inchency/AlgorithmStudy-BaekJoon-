//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int N;
//	string command;
//	int num;
//	cin >> N;
//	deque<int>dq;
//	while (N--) {
//		cin >> command;
//		if (command == "push_front") {
//			cin >> num;
//			dq.push_front(num);
//		}
//		else if (command == "push_back") {
//			cin >> num;
//			dq.push_back(num);
//		}
//		else if (command == "pop_front") {
//			if (dq.empty()) cout << -1 << endl;
//			else {
//				cout << dq.front() << endl;
//				dq.pop_front();
//			}
//		}
//		else if (command == "pop_back") {
//			if (dq.empty()) cout << -1 << endl;
//			else {
//				cout << dq.back() << endl;
//				dq.pop_back();
//			}
//		}
//		else if (command == "size") {
//			cout << dq.size() << endl;
//		}
//		else if (command == "empty") {
//			if (dq.empty()) cout << "1\n";
//			else cout << "0\n";
//		}
//		else if (command == "front") {
//			if (dq.empty()) cout << -1 << endl;
//			else cout << dq.front() << endl;
//		}
//		else if (command == "back") {
//			if (dq.empty()) cout << -1 << endl;
//			else cout << dq.back() << endl;
//		}
//
//	}
//	return 0;
//}