#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Content {
	string input;
	int strike;
	int ball;
};
bool check(Content a, string s) {
	int strike = 0;
	int ball = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a.input[i] == s[j] && i == j)
				strike++;
			else if (a.input[i] == s[j])
				ball++;
		}
	}
	if (strike == a.strike && ball == a.ball)
		return true;
	else
		return false;
}
int main() {
	int input;
	cin >> input;
	vector<Content>arr;
	Content temp;
	arr.assign(input,temp);
	for (int i = 0; i < input; i++) {
		cin >> arr[i].input >> arr[i].strike >> arr[i].ball;
	}
	int cnt = 0;
	string tempS;
	tempS.assign(3, 0);
	for (int i = 1; i < 10; i++) {
		tempS[0] = i + '0';
		for (int j = 1; j < 10; j++) {
			if (j == i)continue;
			tempS[1] = j+'0';
			for (int k = 1; k < 10; k++) {
				if (k == j || k == i) continue;
				tempS[2] = k+'0';
				for (int q = 0; q < input; q++) {
					if (check(arr[q], tempS)) {
						if (q == input - 1) {
							cnt++;
						}
						else continue;
					}
					else
						break;
				}
			}
		}
	}
	cout << cnt << endl;
}