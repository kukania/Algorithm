#include<iostream>
using namespace std;
#define MAX(a,b) (a)>(b)?(a):(b)
#define MIN(a,b) (a)>(b)?(b):(a)
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int cnt = 0;
	int max = MAX(a, (MAX(b, c)));
	int min = MIN(a, (MIN(b, c)));
	int mid = a + b + c - max - min;
	while (1) {
		int temp = mid;
		if (max - mid > mid - min) {
			mid = mid + 1;
			min = temp;
		}
		else {
			mid = mid - 1;
			max = temp;
		}
		if (mid == max || mid==min)
			break;
		cnt++;
	}
	cout << cnt << endl;
}