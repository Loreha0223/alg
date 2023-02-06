#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 
    cin.tie(0); ios::sync_with_stdio(0);

    int N;
    int comp1,comp2, cnt=99;
    cin >> N;
    if (N<100) {
        cout << N;
        return 0;
    }
    for (int j=100; j<=N; j++){
        string s = to_string(j);
        comp1 = s[0]-s[1];
        comp2 = s[1]-s[2];
        if (comp1==comp2) cnt++;
    }
    cout << cnt;
}
