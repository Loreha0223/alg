#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, temp;
	vector<int>coin;
	cin >> n >> k;
	for (int i=0; i<n; i++){
		cin >> temp;
		coin.push_back(temp);
	}
	sort(coin.begin(), coin.end(), greater<>());
	
	int i=0, count=0, cnt = 0;
	while(k>0){
		count = k/coin[i];
		k = k - count*coin[i];
		cnt += count;
		i++;
	}
	cout << cnt;
	return 0;
}