#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string s;
	getline(cin, s);

	if (islower(s[0])) s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++) {
		if (s[i - 1] == ' ' && isalpha(s[i]))
			s[i] = toupper(s[i]);
		else s[i] = tolower(s[i]);
	}
	cout << s;
}