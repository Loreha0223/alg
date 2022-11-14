#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
	string answer = "";
	string s;
	getline(cin, s);

	istringstream ss(s);
	vector<string> number;
	string temp;
	while (getline(ss, temp, ' ')) {
		number.push_back(temp);
	}

	string min = number[0];
	string max = number[0];
	for (int i = 0; i < number.size(); i++) {
		if (stoi(min) > stoi(number[i])) min = number[i];
		else if (stoi(max) < stoi(number[i])) max = number[i];
	}
	answer.append(min);
	answer.append(" ");
	answer.append(max);
	cout << answer;
}