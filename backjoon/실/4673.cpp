#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool gen[1000001];

bool makegenum(int n){
    int ret=n;
    while(n!=0){
        ret+=(n%10);
        n/=10;
    }
    return gen[ret]=true;
}


int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    for (int i=1; i<=10000; i++)makegenum(i);
    for (int i=1; i<=10000; i++)
        if (!gen[i]) cout << i << '\n';
}