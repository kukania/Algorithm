#include<iostream>
using namespace std;
int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int f;
		int arr[6];
		int arr2[6];
		int sum = 0;
		cin >> f;
		for (int i = 0; i < 6; i++) {
			cin >> arr[i];
			sum += arr[i];
			arr2[i] = arr[i];
		}
		int day = 1;
		while (sum <= f) {
			day++;
			for (int i = 0; i < 6; i++) {
				if (i == 0) {
					arr2[0] += arr[5] + arr[1] + arr[3];
				}
				else if (i == 5) {
					arr2[5] += arr[4] + arr[0] + arr[2];
				}
				else {
					arr2[i] += arr[i + 1] + arr[i - 1] + arr[(i + 3) % 6];
				}
			}
			sum = 0;
			for (int i = 0; i < 6; i++)
				sum += arr2[i];
			for (int i = 0; i < 6; i++)
				arr[i] = arr2[i];
		}
		cout << day << endl;
	}
}