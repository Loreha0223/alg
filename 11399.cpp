#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt, down = 0;
	cin >> n;

	while(1){
		cnt = (n-down*5)/5;
		int leave = n-cnt*5;
		if (leave%3==0){
			cnt+=leave/3;
			break;
		}
		else if (leave>3 && cnt == 0) {
			cout << -1;
			return 0;
		}
		else down++;
	}

	cout << cnt;
	return 0;
}