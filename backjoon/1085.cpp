#include <bits/stdc++.h>
using namespace std;

int x, y, w, h;

int main() {
	cin >> x >> y >> w >> h;
	vector<int> box = { x, y, w - x, h - y };
	sort(box.begin(), box.end());
	cout << box[0];
	return 0;
}