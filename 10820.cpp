//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	string line;
//	getline(cin, line);
//	while (line.size() != 0) {
//		int upper = 0, lower = 0, number = 0, blank = 0;
//		for (int i = 0; i < line.size(); i++) {
//			if (line[i] >= 'A' && line[i] <= 'Z') upper++;
//			else if (line[i] >= 'a' && line[i] <= 'z') lower++;
//			else if (line[i] == ' ') blank++;
//			else number++;
//		}
//		cout << lower << " " << upper << " " << number << " " << blank << endl;
//		getline(cin, line);
//	}
//	return 0;
//}