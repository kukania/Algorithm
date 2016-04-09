#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int board[51][51];
int arr[2][51][51][4];
// k 1:left 2:right 3:up 4:down
void go(int f,int i, int j, int k) {
	switch (k){
	case 0:
		go(f, i, j + 1, 1);
		go(f, i, j - 1, 2);
		go(f, i + 1, j, 3);
		go(f, i -1, j, 4);
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
}
int main() {
	int y, x;
	scanf("%d%d", &y, &x);
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			scanf("%d", &board[i][j]);
		}
	}

}