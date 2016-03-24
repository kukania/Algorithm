#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {
	int input;
	cin >> input;
	vector<int>arr;
	arr.assign(input + 1, 100001);
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= input; i++) {
		for (int j = sqrt(i); j >=1; j--) {
			if (i - j*j == 0) {
				arr[i] = 1;
				break;
			}
			else {
				if (arr[i] > arr[i - j*j] + arr[j*j])
					arr[i] = arr[i - j*j] + arr[j*j];
			}
		}
	}
	cout << arr[input] << endl;
	return 0;
}