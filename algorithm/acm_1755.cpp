#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Content {
	int num;
	string numS;
};
bool func(Content a, Content b) {
	a.numS < b.numS;
}
int main() {
	string number[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	int n, m;
	cin >> n >> m;
	vector<Content> arr;
	for (int i = n; i <= m; i++) {
		Content result;
		result.num = i;
		result.numS = "";
		if (i / 10 != 0)
			result.numS += number[i / 10]+" ";
		result.numS += number[i % 10];
		arr.push_back(result);
	}
	sort(arr.begin(), arr.end(), func);
	int cnt = 0;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i].num;
		cnt++;
		if (cnt == 10) {
			cout << endl;
			cnt = 0;
		}
		else //준수형 어디감
			cout << " ";
		}
	cout << endl;
	return 0;
}