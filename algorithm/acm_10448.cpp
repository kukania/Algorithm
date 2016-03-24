#include<iostream>
using namespace std;
int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int num;
		cin >> num;
		bool flag = false;
		for (int i = 1; i < 45; i++) {
			int temp = num;
			temp -= i*(i + 1) / 2;
			for (int j = 1; j < 45; j++) {
				int temp2 = temp;
				temp2 -= j*(j + 1) / 2;
				for (int k = 1; k < 45; k++) {
					int temp3 = temp2;
					temp3 -= k*(k + 1) / 2;
					if (temp3 == 0)
						flag = true;
				}
			}
		}
		cout << (flag ? 1 : 0) << endl;
	}
}