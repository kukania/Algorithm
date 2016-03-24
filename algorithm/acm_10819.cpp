#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int input;
vector<int> res;
int sumMax() {
	int sum = 0;
	for (int i = 0; i < input -1; i++) {
		sum += abs(res[i] - res[i+1]);
	}
	return sum;
}
int main() {
	scanf("%d", &input);
	res.assign(input, 0);
	for (int i = 0; i < input; i++) scanf("%d", &res[i]);
	sort(res.begin(), res.end());
	int max = 0;
	do {
		int temp = sumMax();
		if (max < temp)
			max = temp;
	} while (next_permutation(res.begin(), res.end()));
	printf("%d\n", max);
}