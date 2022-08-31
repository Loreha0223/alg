#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, total = 0, sum = 0;
	cin >> n;
	vector<int>ipt(n,0);
	for (int i=0; i<n; i++){
		cin >> ipt[i];
	}
	sort(ipt.begin(), ipt.end()); // 1 2 3 3 4
	for (int i=0; i<n; i++){
		sum += ipt[i];
		total += sum;
	}
	cout << total;
	return 0;
}