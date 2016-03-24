#include<iostream>
#include<vector>
using namespace std;
int main() {
	int input;
	cin >> input;
	vector<int>data;
	data.assign(501, 0);
	vector<int>lis;
	lis.assign(501, 0);
	for (int i = 0; i < input; i++) {
		int a;
		cin >> a;
		cin>> data[a];
	}
	for (int i = 0; i < 501; ++i)
	{
		lis[i] = 1;
		for (int j = 0; j < i; ++j)
		{
			if (data[j] == 0)
				continue;
			if (data[j] < data[i] && 1 + lis[j] > lis[i])
			{
				lis[i] = 1 + lis[j];
			}
		}
	}
	int maxvalue=0;
	for (int i = 0; i < 501; ++i)
	{
		if (maxvalue < lis[i])
		{
			maxvalue = lis[i];
		}
	}
	cout << input - maxvalue << endl;
}