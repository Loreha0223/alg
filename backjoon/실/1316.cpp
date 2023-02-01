#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkalpha[30];

bool chkaph(string s){
    int n;
    for (int i=0; i<s.size(); i++){
        if (!checkalpha[s[i]-97])
            checkalpha[s[i]-97]=true;
        else if (s[i-1]==s[i]) continue;
        else return false;
    }
    return true;
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    int n, cnt=0;
    string alpha;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> alpha;
        if (chkaph(alpha)) cnt++;
        for (int i=0; i<30; i++)checkalpha[i]=false;
    }
    cout << cnt;
}