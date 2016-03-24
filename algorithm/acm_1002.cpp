#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
float dotsDist(int a, int b, int c, int d) {
	return (float)(sqrt((a - b)*(a - b) + (d - c)*(d - c)));
}
int main() {
	int testCase;
	cin >> testCase;
	int x1, y1, x2, y2, r1, r2;
	while (testCase--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		float r = (float)(r1 + r2);
		float len = dotsDist(x1, x2, y1, y2);
		int min = r1 > r2 ? r2 : r1;
		if (x1 == x2 && y1 == y2 && r1 == r2)
			cout << -1 << endl;
		else if (len == r1 + r2 || len + min == r1 + r2 - min) {
			cout << 1 << endl;
		}
		else if (len > r1 + r2 || len + min < r1 + r2 - min) {
			cout << 0 << endl;
		}
		else
			cout << 2 << endl;
	}

	return 0;
}