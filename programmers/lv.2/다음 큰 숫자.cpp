#include <string>
#include <vector>
#include <iostream>
using namespace std;
string to_bin(int n) {
	string temp = "";
	while (n != 0) {
		temp=(to_string(n % 2))+temp;
		n /= 2;
	}
	
	return temp;
}

int count_one(string r) {
	int cnt=0;
	for (int i = 0; i < r.size(); i++) {
		if (r[i] == '1') cnt++;
	}
	return cnt;
}
int main() {
	int n;
	cin >> n;
	string bin = to_bin(n);
	cout << bin << ' ';
	int ones = count_one(bin);
	for (int i = n + 1; ; i++) {
		int compare = count_one(to_bin(i));
		if (ones == compare) {
			cout << i;
			break;
		}
	}
	
}