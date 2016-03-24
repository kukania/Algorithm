#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int main() {
	int a, b;
	//가로,세로
	int input;
	int x = 1, y = 1;
	scanf("%d %d %d", &a, &b, &input);
	if (a*b < input) {
		printf("%d\n", 0);
		return 0;
	}
	else {
		int cnt1 = 0;
		int first = 1;
		int end = 2 * (a - 1) + 2 * (b - 1);
		while (input<first || input>end) {
			cnt1++;
			first = end + 1;
			a -= 2; b -= 2;
			end += 2 * (a - 1) + 2 * (b - 1);
			if (first > end)
				break;
		}
		x += cnt1; y += cnt1;
		int temp = first;
		bool flag = false;
		if (temp == input)
			flag = true;
		if (!flag)
			for (int i = 0; i < b-1; i++) {
				y++;
				temp++;
				if (temp == input) {
					flag = true;
					break;
				}
			}
		if (!flag)
			for (int i = 0; i < a-1 ; i++) {
				x++;
				temp++;
				if (temp == input) {
					flag = true;
					break;
				}
			}
		if (!flag)
			for (int i = 0; i < b-1; i++) {
				y--;
				temp++;
				if (temp == input) {
					flag = true;
					break;
				}
			}
		if (!flag)
			for (int i = 0; i < a - 2; i++) {
				x--;
				temp++;
				if (temp == input) {
					flag = true;
					break;
				}
			}
	}
	printf("%d %d\n", x, y);
}