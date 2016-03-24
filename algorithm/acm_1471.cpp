#include<iostream>
using namespace std;
int main() {
	int e, m, s;
	int cnt = 0;
	cin >> e >> m >> s;
	int t1 = 0, t2 = 0, t3 = 0;
	while (1) {
		cnt++;
		if (t1 + 1 == e && t2 + 1 == m && t3 + 1 == s)
			break;
		t1++; t2++; t3++;
		t1 %= 15; 
		t2 %= 28; 
		t3 %= 19; 
	}
	cout << cnt << endl;
}