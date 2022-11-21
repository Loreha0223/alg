#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int cal_gcd(int a, int b) {
	while (b != 0) {
		int temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}
int main() {
	vector<int> arr = { 5,10,15,20,25 };
	int cnt = 1;
	while (arr.size() >= 2) {
		int a = arr.back();
		arr.pop_back();
		int b = arr.back();
		arr.pop_back();
		arr.push_back(a * b / cal_gcd(a, b));
		cout << arr.back() <<' '<<  arr.size() << '\n';
	}
	cout << arr[0];
	
}