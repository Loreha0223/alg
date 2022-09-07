#include <bits/stdc++.h>
using namespace std;
int n, m, x;
vector<int> box1;
vector<int> box2;

bool binary(int target) {
	int left = 0;
	int right = n - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (box1[mid] == target) {
			return true;
		}
		else if (box1[mid] <= target) {
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return false;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		box1.push_back(m);
	}
	sort(box1.begin(), box1.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x;
		box2.push_back(x);
	}

	for (int i = 0; i < m; i++) {
		if (binary(box2[i])) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
	return 0;
}