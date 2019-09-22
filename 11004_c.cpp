//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
//int main() {
//	int N, K;
//	cin >> N >> K;
//	priority_queue< int, vector<int>, greater<int> >pq;
//	for (int i = 0; i < N; i++) {
//		int num;
//		scanf("%d", &num);
//		pq.push(num);
//	}
//	for (int i = 0; i < K; i++) {
//		if (i == K - 1)
//			printf("%d", pq.top());
//		pq.pop();
//	}
//}