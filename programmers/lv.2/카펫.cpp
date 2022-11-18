#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int brown, yellow;
	cin >> brown >> yellow;
	int x, y;
	int flag = 0;
	if (yellow == 1) { x = 3, y = 3; }
	else if (yellow == 2) { x = 4, y = 3; }
	else {
		for (int i = yellow / 2 + 1; i >= 2; i--) {
			if (yellow % i == 0) {
				flag = 1;
				if (yellow == i * (yellow / i) && ((i + yellow / i + 2) == brown / 2)) {
					x = i + 2;
					y = yellow / i + 2;
					break;
				}
			}
		}
		if (flag == 0) { x = yellow + 2, y = 3; }
	}
	





	/*if (yellow == 1) { x=3, y = 3; }
	else if (yellow == 2) { x = 4, y = 3; }
	else {
		int i;
		int min = 1000000;
		for (i = (yellow/2)+1; i >= 2; i--) {
			int dx = i + 2;
			int dy = yellow / i + 2;
			if (yellow % i == 0 && min>abs(dx-dy) &&(dx>=dy)) {
				x = dx;
				y = dy;
				min = x - y;
			}
		}
		if (min == 1000000) { x = yellow + 2, y = 3; }
	}*/
	cout << x << ' ' << y;
}