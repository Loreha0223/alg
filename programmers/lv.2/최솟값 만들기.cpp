#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	vector<int> A, B;
	int a;
	int cnt = 0;
	cout << "자연수 : 데이터 저장 / 0 입력시 B배열 이동 및 입력종료\n";
	while (cin >> a) {
		if (a <= 0) cnt++;

		if (cnt == 0)A.push_back(a);
		else B.push_back(a);

		if (cnt == 2) break;
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());
	int answer = 0;
	for (int i = 0; i < A.size(); i++) {
		answer += A[i] * B[i];
	}
	cout << answer;
}