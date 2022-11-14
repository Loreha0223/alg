#include <iostream>
#include <string>
#include <vector>
#include <bitset>

using namespace std;

string bin(int n) {
	string r;
	while (n != 0) {
		r += (n % 2 == 0 ? "0" : "1");
		n /= 2;
	}
	return r;
}

int main() {
	string s;
	cin >> s;
	int zero = 0;
	int cnt = 0;
	while (s != "1") {
		int len = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '1') len++;
			else zero++;
		}
		cnt++;
		s = bin(len);
	}
	printf("[%d,%d]\n", cnt, zero);
}