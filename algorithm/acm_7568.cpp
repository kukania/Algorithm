#include<iostream>
#include<vector>
using namespace std;
int main() {
	int input;
	cin >> input;
	vector <int> w;
	w.assign(input, 0);
	vector <int> h;
	h.assign(input, 0);
	for (int i = 0; i < input; i++)
		cin >> w[i] >> h[i];
	for (int i = 0; i < input; i++) {
		int cnt = 0;
		for (int j = 0; j < input; j++) {
			if (w[j] > w[i] && h[j]>h[i])
				cnt++;
		}
		cout << cnt + 1 << " ";
	}
	cout << endl;
}