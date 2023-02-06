#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    
    cin.tie(0); ios::sync_with_stdio(0);

    int N;
    stack<char> s;
    string temp;

    cin >> N;
    for (int i=0; i<N; ++i){
        cin >> temp;
        int j;
        for (j=0; j<temp.size(); ++j){
            if(s.empty() && temp[j]==')') break;
            else if(temp[j]=='(') s.push(temp[j]);
            else s.pop();
        }
        if (j==temp.size() && s.size()==0) cout << "YES\n";
        else cout << "NO\n";
        while(!s.empty())s.pop();
    }
}
