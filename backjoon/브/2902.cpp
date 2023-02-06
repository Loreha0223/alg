#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    cin.tie(0); ios::sync_with_stdio(0);

    int N;
    string s;
    vector<char> alpha;
    cin >> s;
    alpha.push_back(s[0]);
    for (int i=1; i<s.size(); i++){
        if(s[i]=='-') alpha.push_back(s[i+1]);
    }

    for (int i=0; i<alpha.size(); i++) cout << alpha[i];
}
