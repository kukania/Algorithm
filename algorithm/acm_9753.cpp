#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> input;
void getChe(int num) {
	int i = 2;
	// �Է¹��� �� ��ŭ �迭�� ��� �ʱ�ȭ �صд�
	for (i = 2; i <= num; i++) {
		arr[i] = i;
	}

	for (i = 2; i <= sqrt(num); i++) {
		if (arr[i] == 0) // �̹� üũ�� ���� ����� Ȯ������ �ʴ´�
			continue;
		for (int j = i + i; j <= num; j += i) { // i�� ������ i�� ������� 0���� üũ
			arr[j] = 0;
		}
	}
	for (i = 2; i <= num; i++) {
		if (arr[i] != 0)
			input.push_back(arr[i]);
	}
}
int main() {
	getChe(100000);
	dp[0] = 6;
	int num=1;
	
	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		int num;
		scanf("%d", &num);
		int mul;
		int min = 100002;
		for (int i = 0; i < input.size(); i++) {
			int temp = num / input[i];
			if (num%input[i] == 0) {}
			else temp++;
			mul = *lower_bound(input.begin(), input.end(), temp);
			if (mul == input[i])
				continue;
			else {
				mul *= input[i];
				if (mul < min)
					min = mul;
			}
		}
		printf("%d\n",min);
	}
}