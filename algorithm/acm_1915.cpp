#include<iostream>
#include<cstring>
#include<string>
#include<vector>
using namespace std;
int main() {
	int row, col;
	cin >> row >> col;
	vector <string> set;
	string temp;
	vector < vector<int> > set2;
	vector <int> tempInt;
	for (int i = 0; i < row; i++) {
		cin >> temp;
		set.push_back(temp);
		tempInt.clear();
		for (int j = 0; j < temp.size(); j++) {
			tempInt.push_back(temp[j] - '0');
		}
		set2.push_back(tempInt);
	}
	int max = 0;
	for (int i = 1; i < row; i++) {
		for (int j = 1; j < col; j++) {
			if (set2[i][j]>0)
				for (int k = 1; k <= set2[i - 1][j - 1]; k++) {
					if (set2[i][j - k] && set2[i - k][j]) {
						if (k == set2[i - 1][j - 1]) {
							set2[i][j] = set2[i - 1][j - 1] + 1;
						}
						else continue;
					}
					else {
						set2[i][j] = k;
						break;
					}
				}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (set2[i][j]>max)
				max = set2[i][j];
		}
	}
	cout << max*max << endl;
}