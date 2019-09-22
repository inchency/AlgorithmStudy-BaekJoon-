//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Student {
//public:
//	int age;
//	string name;
//};
//
//bool compare(Student s1, Student s2);
//
//int main() {
//	int n;
//	cin >> n;
//	vector<Student>stv(n);
//	for (int i = 0; i < n; i++) {
//		int age;
//		string name;
//		cin >> age >> name;
//		Student stu;
//		stu.age = age;
//		stu.name = name;
//		stv[i] = stu;
//	}
//	stable_sort(stv.begin(), stv.end(), compare);
//	for (int i = 0; i < n; i++) {
//		cout << stv[i].age << " " << stv[i].name << "\n";
//	}
//	return 0;
//}
//
//bool compare(Student s1, Student s2) {
//	if (s1.age < s2.age) {
//		return true;
//	}
//	return false;
//}