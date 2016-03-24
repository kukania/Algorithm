#include<iostream>
#include<vector>
using namespace std;
int num;
int func(int x, int y, vector<vector <int> > arr) {
	int cnt = 0;
	for (int j = x; j < num; j++) {
		if (arr[y][j] == 1) {
			cnt++;
			for (int q = 0; q < num; q++) {
				if (j + q < num && y + q < num)
					arr[y + q][j + q] = 0;
				if (j - q >= 0 && y + q < num)
					arr[y + q][j - q] = 0;
				if (y - q >= 0 && j - q >= 0)
					arr[y - q][j - q] = 0;
				if (j + q < num && y - q >= 0)
					arr[y - q][j + q] = 0;
			}
		}
	}
	for (int i = y+1; i < num; i++) {
		for (int j = 0; j < num; j++)
			if (arr[i][j] == 1) {
				cnt++;
				for (int q = 0; q < num; q++) {
					if (j + q < num && i + q < num)
						arr[i + q][j + q] = 0;
					if (j - q >= 0 && i + q < num)
						arr[i + q][j - q] = 0;
					if (i - q >= 0 && j - q >= 0)
						arr[i - q][j - q] = 0;
					if (j + q < num && i - q >= 0)
						arr[i - q][j + q] = 0;
				}
			}
	}
	return cnt;
}
int main() {
	cin >> num;
	vector<int>temp;
	temp.assign(num, 0);
	vector< vector <int> > arr;
	arr.assign(num, temp);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++)
			cin >> arr[i][j];
	}
	int max = 0;
	int tempI;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (max < (tempI = func(j, i, arr))) {
				max = tempI;
			}
		}
	}
	cout << max << endl;
	return 0;
}