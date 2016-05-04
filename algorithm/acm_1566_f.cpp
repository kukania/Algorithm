#include<cstdio>
#include<algorithm>
#define MAX 37
using namespace std;
struct Line {
	int line;
	bool column;
	int num;
};
int arr[18][18];
int arr2[18][18];
Line arrL[18];
int width, height;
bool checkMatrix() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (arr[i][j] != arr2[i][j])
				return false;
		}
	}
	return true;
}
bool checkComp() {
	for (int i = 0; i < width + height; i++)
		if (arrL[i].num <= 0)return false;
	return true;
}
void change(int index) {
}
bool func(Line a, Line b) { return a.num < b.num; }
int main() {
	scanf("%d %d", &width, &height);
	for (int i = 0; i < height; i++) {
		for (int j = 0; j <width; j++) {
			scanf("%d", &arr[i][j]);
			arrL[j].num += arr[i][j];
			arrL[i+width].num += arr[i][j];
		}
	}

	for (int i = 0; i < width + height; i++) {
		if (i >= width) {
			arrL[i].column = false;
			arrL[i].line = i - width;
		}
		else {
			arrL[i].column = true;
			arrL[i].line = i;
		}
	}
	int cnt = 0;
	while (1) {
		sort(&arrL[0], &arrL[width + height], func);
		if (checkComp()) {
			printf("%d\n", cnt);
			return 0;
		}
		else {
			change();
			if (checkMatrix() && !checkComp()) {
				
			}
		}
	}
}