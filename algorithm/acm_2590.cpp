#include<iostream>
using namespace std;
int main() {
	int arr[7];
	int papper = 0;
	for (int i = 1; i < 7; i++) {
		cin >> arr[i];
	}
	papper += arr[6];
	papper += arr[5];
	for (int j = 0; j < arr[5]; j++) {
		if (!arr[1])
			break;
		for (int i = 0; i < 11; i++) {
			if (!arr[1])
				break;
			arr[1]--;
		}
	}
	papper += arr[4];
	for (int j = 0; j < arr[4]; j++) {
		int temp1 = 0;
		if (!arr[2])
			break;
		for (int i = 0; i < 5; i++) {
			if (!arr[2])
				break;
			arr[2]--;
			temp1++;
		}
		if (temp1 != 5) {
			int tempArea = 20 - temp1 * 4;
			for (int k = 0; k < tempArea; k++) {
				if (!arr[1])
					break;
				arr[1]--;
			}
		}
	}
	//3
	papper += arr[3] / 4;
	arr[3] %= 4;
	papper += arr[3] == 0 ? 0 : 1;
	int temp1;
	switch (arr[3]) {
	case 0:
		break;
	case 1:
		temp1 = 0;
		for (int i = 0; i < 5; i++) {
			if (!arr[2])
				break;
			arr[2]--;
			temp1++;
		}
		for (int i = 0; i < 7+(5-temp1)*4; i++) {
			if (!arr[1])
				break;
			arr[1]--;
		}
		break;
	case 2:
		temp1 = 0;
		for (int i = 0; i < 3; i++) {
			if (!arr[2])
				break;
			arr[2]--;
			temp1++;
		}
		for (int i = 0; i < 6+(3-temp1)*4; i++) {
			if (!arr[1])
				break;
			arr[1]--;
		}
		break;
	case 3:
		temp1 = 0;
		for (int i = 0; i < 1; i++) {
			if (!arr[2])
				break;
			arr[2]--;
			temp1++;
		}
		for (int i = 0; i < 5+(1-temp1)*4; i++) {
			if (!arr[1])
				break;
			arr[1]--;
		}
		break;
	}
	//2
	papper += arr[2] / 9;
	arr[2] %= 9;
	papper+= arr[2] == 0 ? 0 : 1;
	int temp = 36 - arr[2] * 4;
	for (int i = 0; i < temp; i++) {
		if (!arr[1])
			break;
		arr[1]--;
	}
	//1
	papper += arr[1] / 36;
	arr[1] %= 36;
	papper += arr[1] == 0 ? 0 : 1;
	cout << papper << endl;
	return 0;
}