#include <vector>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	stack<char> temp;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') temp.push(s[i]);
		else if (s[i] == ')' && !temp.empty()) temp.pop();
		else {
			cout << "false";
			return 0;
		}
	}
	if (temp.empty()) cout << "true";
	else cout << "false";
	
}