//#include <iostream>
//#include <string>
//#define MAX_SIZE 100000
//
//using namespace std;
//
//class Queue {
//private:
//	int arr[MAX_SIZE];
//	int front;
//	int back;
//public:
//	Queue() {
//		for (int i = 0; i < MAX_SIZE; i++) arr[0] = -1;
//		front = 0;
//		back = 0;
//	}
//	bool is_empty() {
//		if (front == back) return true;
//		return false;
//	}
//	void push(int n) {
//		arr[back++] = n;
//	}
//	int pop() {
//		if (is_empty()) return -1;
//		return arr[front++];
//	}
//	int size() {
//		return back - front;
//	}
//	int func_front() {
//		if (is_empty()) return -1;
//		return arr[front];
//	}
//	int func_back() {
//		if (is_empty()) return -1;
//		return arr[back - 1];
//	}
//};
//
//int main() {
//	int N;
//	string command;
//	int num;
//	Queue queue;
//	cin >> N;
//	while (N--) {
//		cin >> command;
//		if (command == "push") {
//			cin >> num;
//			queue.push(num);
//		}
//		else if (command == "pop") {
//			cout << queue.pop() << endl;
//		}
//		else if (command == "size") {
//			cout << queue.size() << endl;
//		}
//		else if (command == "empty") {
//			if (queue.is_empty()) cout << 1 << endl;
//			else cout << 0 << endl;
//		}
//		else if (command == "front") {
//			cout << queue.func_front() << endl;
//		}
//		else if (command == "back") {
//			cout << queue.func_back() << endl;
//		}
//	}
//	return 0;
//}