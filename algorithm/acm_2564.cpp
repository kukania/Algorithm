#include <iostream>
using namespace std;
struct set {
	int x;
	int y;
};
set arr[101];
int main() {
	int X, Y;
	int nx, ny;
	int tmp1, tmp2;
	int result = 0;
	int tmp;
	cin >> X >> Y;
	int N;
	cin >> N;
	for (int i = 0; i < N + 1; i++) {
		cin >> arr[i].x >> arr[i].y;
	}
	if (arr[N].x == 1) {
		nx = arr[N].y;
		ny = Y;
	}
	else if (arr[N].x == 2) {
		nx = arr[N].y;
		ny = 0;
	}
	else if (arr[N].x == 3) {
		nx = 0;
		ny = Y - arr[N].y;
	}
	else {
		nx = X;
		ny = Y - arr[N].y;
	}
	for (int i = 0; i < N; i++) {
		if (arr[N].x == arr[i].x) {
			tmp = arr[N].y - arr[i].y;
			if (tmp < 0)
				tmp *= -1;
			result += tmp;
		}
		else if (arr[N].x + arr[i].x == 3 || arr[N].x + arr[i].x == 7) {
			tmp1 = arr[N].x + arr[i].x;
			if (tmp1 == 3) {
				if (arr[N].y + arr[i].y > 2 * X - arr[N].y - arr[i].y) {
					result += 2 * X - arr[N].y - arr[i].y;
				}
				else {
					result += arr[N].y + arr[i].y;
				}
				result += Y;
			}
			else if (tmp1 == 7) {
				if (arr[N].y + arr[i].y > 2 * Y - arr[N].y - arr[i].y) {
					result += 2 * Y - arr[N].y - arr[i].y;
				}
				else {
					result += arr[N].y + arr[i].y;
				}
				result += X;
			}
		}
		else {
			if (arr[i].x == 1) {
				tmp1 = arr[i].y;
				tmp2 = Y;
			}
			else if (arr[i].x == 2) {
				tmp1 = arr[i].y;
				tmp2 = 0;
			}
			else if (arr[i].x == 3) {
				tmp1 = 0;
				tmp2 = Y - arr[i].y;
			}
			else {
				tmp1 = X;
				tmp2 = Y - arr[i].y;
			}
			tmp = ny - tmp2;
			if (tmp < 0)
				tmp *= -1;
			result += tmp;
			tmp = nx - tmp1;
			if (tmp < 0)
				tmp *= -1;
			result += tmp;
		}
	}
	cout << result << endl;

}