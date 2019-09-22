//#include <iostream>
//#include <string>
//#define MAX_SIZE 10000
//
//using namespace std;
//
//class Stack {
//private:
//	int arr[MAX_SIZE];
//	int current_index;
//public:
//	Stack() {
//		for (int i = 0; i < MAX_SIZE; i++) {
//			arr[i] = -1;
//		}
//		current_index = 0;
//	}
//	void push(int n) {
//		arr[current_index++] = n;
//	}
//	void pop(){
//		if (current_index == 0) 
//			cout << -1 << endl;
//		
//		else {
//			cout << arr[--current_index] << endl;
//			arr[current_index] = -1;
//		}
//	}
//	void top() {
//		if (current_index == 0)
//			cout << -1 << endl;
//		else
//			cout << arr[current_index - 1] << endl;
//	}
//	void size() {
//		cout << current_index << endl;
//	}
//	void is_empty() {
//		if(current_index == 0)
//			cout << 1 << endl;
//		else
//			cout << 0 << endl;
//	}
//};
//
//int main() {
//	int N;
//	cin >> N;
//	string command;
//	int num;
//	Stack stack;
//	while (N--) {
//		cin >> command;
//		if (command == "push") {
//			cin >> num;
//			stack.push(num);
//		}
//		else if (command == "pop") {
//			stack.pop();
//		}
//		else if (command == "size") {
//			stack.size();
//		}
//		else if (command == "empty") {
//			stack.is_empty();
//		}
//		else if (command == "top") {
//			stack.top();
//		}
//	}
//	return 0;
//}