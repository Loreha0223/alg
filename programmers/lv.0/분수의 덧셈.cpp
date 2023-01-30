#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool prime[10000001];
vector<int> primes;
int eratos(int N) {
    for (int i = 2; i <= N; i++) {
        if (!prime[i]) {
            primes.push_back(i);
            for (int j = 2 * i; j <= N; j = i + j) {
                prime[j] = true;
            }
        }
    }
    return N;
}
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int denom = denom1 * denom2;
    numer1 = (denom / denom1) * numer1;
    numer2 = (denom / denom2) * numer2;
    int numer = numer1 + numer2;
    int m = denom > numer ? eratos(denom) : eratos(numer);
    //for (int i=0; i<primes.size(); i++) cout << primes[i] << ' ';

    for (int i = 0; i < primes.size();) {
        if (primes[i] > numer || primes[i] > denom) break;
        if (denom % primes[i] == 0 && numer % primes[i] == 0) {
            denom = denom / primes[i];
            numer = numer / primes[i];
        }
        else i++;
    }
    answer.push_back(numer);
    answer.push_back(denom);
    return answer;
}