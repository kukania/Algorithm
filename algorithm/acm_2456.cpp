#include<iostream>
using namespace std;
struct member {
	int st;
	int nd;
	int rd;
	int result;
};
member arr[4];
int main() {
	int input;
	cin >> input;
	int ainput[3];
	for (int i = 0; i < input; i++) {
		cin >> ainput[0] >> ainput[1] >> ainput[2];
		for (int i = 0; i < 3; i++) {
			switch (ainput[i]) {
			case 1:
				arr[i + 1].rd++;
				break;
			case 2:
				arr[i + 1].nd++;
				break;
			case 3:
				arr[i + 1].st++;
				break;
			}
		}
	}
	int max = 0;
	int index;
	bool flag = false;
	for (int i = 1; i < 4; i++) {
		arr[i].result = arr[i].st * 3 + arr[i].nd * 2 + arr[i].rd;
		if (max < arr[i].result) {
			max = arr[i].result;
			index = i;
		}
		else if (max == arr[i].result) {
			if (arr[i].st>arr[index].st) index = i;
			else if (arr[i].st == arr[index].st) {
				if (arr[i].rd > arr[index].rd) index = i;
				else if (arr[i].rd == arr[index].rd) {
					index = 0;
					break;
				}
			}
		}
	}
	cout << index << " " << max<<endl;
	return 0;
}