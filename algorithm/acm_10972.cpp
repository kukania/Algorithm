#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int input;
	scanf("%d", &input);
	vector<int> arr;
	arr.assign(input, 0);
	for (int i = 0; i < input; i++) scanf("%d", &arr[i]);
	if (!next_permutation(arr.begin(), arr.end()))
		printf("-1");
	else
		for (int i = 0; i < input; i++) printf("%d ", arr[i]);
	printf("\n");
}