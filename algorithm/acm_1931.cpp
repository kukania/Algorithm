#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct Content {
	int start;
	int end;
	int running;
};
bool endSort(Content a, Content b) {
	if (a.end < b.end)
		return true;
	else if (a.end == b.end) {
		return a.running < b.running;
	}
	else
		return false;
}
int main() {
	int num;
	cin >> num;
	Content temp;
	vector<Content> input;
	for (int i = 0; i < num; i++) {
		cin >> temp.start >> temp.end;
		temp.running = temp.end - temp.start;
		input.push_back(temp);
	}
	sort(input.begin(), input.end(), endSort);
	int max=input[0].end;
	int cnt = 1;
	for (int i = 1; i < input.size(); i++) {
		if (input[i].start == input[i].end)cnt++;
		else if (max <= input[i].start) {
			cnt++;
			max = input[i].end;
		}
	}
	cout << cnt << endl;
	return 0;
}