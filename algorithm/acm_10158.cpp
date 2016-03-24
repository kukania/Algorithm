#include<iostream>
using namespace std;
struct ant {
	int x;
	int y;
	int xv;
	int yv;
};
int w, h;
ant m;
void move() {
	if (m.x == w && m.xv == 1)
		m.xv = -1;
	if (m.x == 0 && m.xv == -1)
		m.xv = 1;
	if (m.y == h&&m.yv == 1)
		m.yv = -1;
	if (m.y == 0 && m.yv == -1)
		m.yv = 1;
	m.x += m.xv;
	m.y += m.yv;
}
int main() {
	cin >> w >> h;
	cin >> m.x >> m.y;
	m.xv = 1; m.yv = 1;
	int time;
	cin >> time;
	for (int i = 0; i < time; i++) {
		move();
	}
	cout << m.x << " " << m.y << endl;
}