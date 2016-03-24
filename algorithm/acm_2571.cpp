#include<iostream>
#include<stack>
using namespace std;
int maxArea(int hist[]) {
	int i = 0;
	int tp = 0;
	int maxArea = 0;
	int tempArea = 0;
	stack<int> s;
	while (i < 100) {
		if (s.empty() || hist[s.top()] <= hist[i])
			s.push(i++);
		else {
			tp = s.top();
			s.pop();
			tempArea = hist[tp] * (s.empty() ? i : i - s.top() - 1);
			if (maxArea < tempArea)
				maxArea = tempArea;
		}
	}
	while (s.empty()==false) {
		tp = s.top();
		s.pop();
		tempArea = hist[tp] * (s.empty() ? i : i - s.top() - 1);
		if (maxArea < tempArea)
			maxArea = tempArea;
	}
	return maxArea;
}
int main() {
	int page[100][100] = { 0, };
	int num;
	cin >> num;
	int x, y;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				page[k][j]++;
			}
		}
	}
	int height[100][100] = { 0, };
	for (int i = 0; i < 100; i++) {
		for (int k = 0; k < 100; k++) {
			int temp = 0;
			for (int j = k; j < 100; j++) {
				if (page[j][i])
					temp++;
				else
					break;
			}
			height[k][i] = temp;
		}
	}
	int max = 0;
	for (int i = 0; i < 100; i++) {
		int temp = maxArea(height[i]);
		if (max < temp)
			max = temp;
	}
	cout << max << endl;
	return 0;
}