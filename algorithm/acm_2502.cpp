#include<iostream>
#include<vector>
using namespace std;
struct Content {
	int num1;
	int num2;
};
Content arr[31];
int main() {
	int day, num;
	cin >> day >> num;
	arr[1].num1 = 1;
	arr[2].num2 = 1;
	for (int i = 3; i < 31; i++) {
		arr[i].num1 = arr[i - 1].num1 + arr[i - 2].num1;
		arr[i].num2 = arr[i - 1].num2 + arr[i - 2].num2;
	}
	int num1 = 1;
	int temp = 0;
	while (1) {
		int num2 = 1;
		for (int i = 0; i < 100000; i++) {
			if (arr[day].num1*num1 + arr[day].num2*num2 == num) {
				cout << num1 << endl << num2 << endl;
				return 0;
			}
			if (arr[day].num1*num1 + arr[day].num2*num2>num)
				break;
			num2++;
		}
		num1++;
	}
	return 0;
}