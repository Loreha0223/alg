#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	vector<int> citations;
	int n=0;
	while (n>-1) {
		cin >> n;
		citations.push_back(n);
	}
	citations.pop_back();

	sort(citations.begin(), citations.end(),greater<int>());
	int sum = 0;
	for (int i = 0; i < citations.size(); i++) {
		if (i + 1 <= citations[i])sum++;
		else break;
	}
	cout << sum;
}