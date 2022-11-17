#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 3; i < n; i++) {
		if (n % i == 1) {
			cout << i; break;
		}
	}
	return 3;
}