//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//struct Student {
//	string name;
//	int korea_score;
//	int english_score;
//	int math_score;
//};
//
//bool cmp(Student a, Student b);
//
//int main() {
//	int testCases;
//	cin >> testCases;
//	vector<Student>student;
//	for (int testCase = 0; testCase < testCases; testCase++) {
//		Student stu;
//		cin >> stu.name >> stu.korea_score >> stu.english_score >> stu.math_score;
//		student.push_back(stu);
//	}
//	sort(student.begin(), student.end(), cmp);
//
//	for (int i = 0; i < student.size(); i++) {
//		cout << student[i].name << "\n";
//	}
//
//	return 0;
//}
//
//bool cmp(Student a, Student b) {
//	if (a.korea_score > b.korea_score) return true;
//	else if (a.korea_score == b.korea_score) {
//		if (a.english_score < b.english_score) return true;
//		else if (a.english_score == b.english_score) {
//			if (a.math_score > b.math_score) return true;
//			else if (a.math_score == b.math_score) {
//				return a.name < b.name;
//			}
//			return false;
//		}
//		return false;
//	}
//	return false;
//}