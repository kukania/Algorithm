#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int a, b, c;
		vector<int> arr1,arr2,arr3;
		cin >> a;
		arr1.assign(a, 0);
		for (int i = 0; i < a; i++) cin >> arr1[i];
		cin >> b;
		arr2.assign(b, 0);
		for (int i = 0; i < b; i++) cin >> arr2[i];
		cin >> c;
		arr3.assign(c, 0);
		for (int i = 0; i < c; i++) cin >> arr3[i];
		vector<int> arr;
		arr.assign(a*b*c, 0);
		int cnt = 0;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				for (int k = 0; k < c; k++) {
					arr[cnt++] = arr1[i] + arr2[j] + arr3[k];
				}
			}
		}
		sort(arr.begin(), arr.end());
		vector<int>::iterator it = unique(arr.begin(), arr.end());
		arr.erase(it, arr.end());
		cnt = 0;
		for (int i = 0; i < arr.size(); i++) {
			bool check = false;
			while (arr[i] != 0) {
				if (arr[i] % 10 == 5 || arr[i] % 10 == 8) check = true;
				else
					check = false;
				if (!check) break;
				arr[i] /= 10;
			}
			if (check)
				cnt++;
		}
		cout << cnt << endl;
	}
}