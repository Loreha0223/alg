#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100001] = { 0, };
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= n; i++) {
		arr[i] = (arr[i - 2] + arr[i - 1])%1234567;
	}
	cout << arr[n];
	return 0;
}