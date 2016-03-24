#include<iostream>
#include<string.h>
using namespace std;
int arr[52][52];
int n; int m;
void func(int x, int y) {
	arr[y][x] = 0;
	if (arr[y- 1][x] == 1 && y - 1 >= 0) func(x , y-1);
	if (arr[y + 1][x] == 1 && y + 1 < 52) func(x, y+1);
	if (arr[y][x - 1] == 1 && x - 1 >= 0) func(x-1, y);
	if (arr[y][x + 1] == 1 && x + 1 < 52) func(x+1, y);
}
int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		memset(arr, 0, sizeof(arr));
		int num;
		cin >> n >> m >> num;
		for (int i = 0; i < num; i++) {
			int x, y;
			cin >> x >> y;
			arr[y][x] = 1;
		}
		int cnt=0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 1) {
					func(j, i);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}