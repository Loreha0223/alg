#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    int N, n;
    string s;
    deque<int> q;
    cin >> N;
    for (int i=0; i<N; ++i){
        cin >> s;
        if (s == "push") {cin >> n; q.push_back(n);}
        else if (s=="front") {
            if (!q.empty()) cout << q.front() << '\n';
            else cout << -1 << '\n';
        }
        else if (s=="back") {
            if (!q.empty()) cout << q.back() << '\n';
            else cout << -1 << '\n';
        }
        else if (s=="size") cout << q.size() << '\n';
        else if (s=="pop") {
            if (!q.empty()) {cout << q.front() << '\n'; q.pop_front();}
            else cout << -1 << '\n';
        }
        else if (s=="empty") cout << q.empty() <<'\n';
    }
    return 0;
}