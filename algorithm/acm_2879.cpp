#include<iostream>
using namespace std;
int main() {
	int arr[1001];
	int arr2[1001];
	int input;
	cin >> input;
	for (int i = 0; i < input; i++)
		cin >> arr[i];
	for (int i = 0; i < input; i++)
		cin >> arr2[i];
	int start = 0;
	int end = 0;
	int check = 0;
	int cnt = 0;
	while (1) {
		for (int i = 0; i < input; i++) {
			if (arr[i] == arr2[i])
				start = i + 1;
			else
				break;
		}
		for (int i = start; i < input; i++) {
			if (arr[i] < arr2[i]) {
				if (check == -1) {
					end = i - 1;
					break;
				}
				check = 1;
			}
			else if (arr[i]>arr2[i]) {
				if (check == 1) {
					end = i - 1;
					break;
				}
				check = -1;
			}
			else {
				if (end == start)
					continue;
				else {
					end = i - 1;
					break;
				}
			}
			if (i == input - 1)
				end = i;
		}
		for (int i = start; i <= end; i++) {
			if (check > 0)
				arr[i]++;
			else
				arr[i]--;
			if (i == end)
				cnt++;
		}
		for (int i = 0; i < input; i++) {
			if (arr[i] == arr2[i])
				start = i + 1;
			else
				break;
		}
		end = 0;
		check = 0;
		if (start == input)
			break;
	}
	cout<<cnt<<endl;
	return 0;
}