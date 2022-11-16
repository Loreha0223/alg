#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 1, sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		sum = 0;
		for (int j = i; j < n; j++) {
			sum += j;
			if (sum > n) break;
			else if (sum == n) { cnt++; cout << i; }
		}
	}
	cout << cnt;
}