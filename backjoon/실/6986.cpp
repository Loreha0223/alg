#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<double> ary;
	double temp;
	double avg1 = 0, avg2 = 0;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		ary.push_back(temp);
	}
	sort(ary.begin(), ary.end());

	for (int i = K; i < N - K; i++) {
		if (i >= K && i < N - K) {
			avg1 += ary[i];
		}
		if (i == K || i == N - K - 1) avg2 += ary[i] * (K + 1);
		else avg2 += ary[i];
	}
	avg1 = avg1 / (N - K * 2);
	avg2 = avg2 / N;
	printf("%.2lf %.2lf\n", round(avg1 * 100) / 100, round(avg2 * 100) / 100);
}