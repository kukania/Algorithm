#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	bool page[100][100] = { 0, };
	int row, col;
	for (int i = 0; i < num; i++) {
		cin >> row;
		cin >> col;
		for (int i = row; i < row + 10; i++)
			for (int j = col; j < col + 10; j++) {
				page[i][j] = true;
			}
		
	}
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++)
			if (page[j][i])
				cnt++;
	}
	cout << cnt;
}