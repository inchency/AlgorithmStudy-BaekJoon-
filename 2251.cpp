//#include <iostream>
//#include <vector>
//#include <set>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int A, B, C;
//set<int>s;
//int visit[201][201][201] = { false, };
//
//class Bottle {
//public:
//	int cur_a;
//	int cur_b;
//	int cur_c;
//	Bottle() {}
//	Bottle(int a, int b, int c) {
//		cur_a = a;
//		cur_b = b;
//		cur_c = c;
//	}
//	
//	void set(int a, int b, int c) {
//		cur_a = a;
//		cur_b = b;
//		cur_c = c;
//	}
//};
//
//void solve() {
//	Bottle bottle(0, 0, C);
//	queue<Bottle>q;
//	q.push(bottle);
//	while (!q.empty()) {
//		Bottle bot(q.front().cur_a, q.front().cur_b, q.front().cur_c);
//		q.pop();
//		visit[bot.cur_a][bot.cur_b][bot.cur_c] = true;
//		int can_give_water;
//		if (bot.cur_a == 0)
//			s.insert(bot.cur_c);
//		Bottle new_bot;
//		// give a to b
//		can_give_water = min(bot.cur_a, B - bot.cur_b);
//		if (!visit[bot.cur_a - can_give_water][bot.cur_b + can_give_water][bot.cur_c]) {
//			new_bot.set(bot.cur_a - can_give_water, bot.cur_b + can_give_water, bot.cur_c);
//			q.push(new_bot);
//		}
//		// give a to c
//		can_give_water = min(bot.cur_a, C - bot.cur_c);
//		if (!visit[bot.cur_a - can_give_water][bot.cur_b][bot.cur_c + can_give_water]) {
//			new_bot.set(bot.cur_a - can_give_water, bot.cur_b, bot.cur_c + can_give_water);
//			q.push(new_bot);
//		}
//		// give b to a
//		can_give_water = min(bot.cur_b, A - bot.cur_a);
//		if (!visit[bot.cur_a + can_give_water][bot.cur_b - can_give_water][bot.cur_c]) {
//			new_bot.set(bot.cur_a + can_give_water, bot.cur_b - can_give_water, bot.cur_c);
//			q.push(new_bot);
//		}
//		// give b to c
//		can_give_water = min(bot.cur_b, C - bot.cur_c);
//		if (!visit[bot.cur_a][bot.cur_b - can_give_water][bot.cur_c + can_give_water]) {
//			new_bot.set(bot.cur_a, bot.cur_b - can_give_water, bot.cur_c + can_give_water);
//			q.push(new_bot);
//		}
//		// give c to a
//		can_give_water = min(bot.cur_c, A - bot.cur_a);
//		if (!visit[bot.cur_a + can_give_water][bot.cur_b][bot.cur_c - can_give_water]) {
//			new_bot.set(bot.cur_a + can_give_water, bot.cur_b, bot.cur_c - can_give_water);
//			q.push(new_bot);
//		}
//		// give c to b
//		can_give_water = min(bot.cur_c, B - bot.cur_b);
//		if (!visit[bot.cur_a][bot.cur_b + can_give_water][bot.cur_c - can_give_water]) {
//			new_bot.set(bot.cur_a, bot.cur_b + can_give_water, bot.cur_c - can_give_water);
//			q.push(new_bot);
//		}
//	}
//}
//
//int main() {
//	cin >> A >> B >> C;
//	solve();
//	for (auto it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	return 0;
//}