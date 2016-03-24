#include<iostream>
using namespace std;
int main() {
	bool page[100][100] = { 0, };
	int number;
	cin >> number;
	int x, y;
	for (int i = 0; i < number; i++) {
		cin >> x >> y;
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				page[x + j][y + k] = true;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (page[i][j]) {
				if (i == 0)
					cnt++;
				else
					if (!page[i - 1][j])
						cnt++;
				if (i == 99)
					cnt++;
				else
					if (!page[i + 1][j])
						cnt++;
				if (j == 99)
					cnt++;
				else
					if (!page[i][j + 1])
						cnt++;
				if (j == 0)
					cnt++;
				else
					if (!page[i][j - 1])
						cnt++;
			}
		}
	}
	cout << cnt << endl;
}