#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool arr[1001];
int main(){
    int N,K;
    cin >> N >> K;
    int cnt = 0;
    for (int i=2; i<=N; i++){
        if (!arr[i]){
            for (int j=i; j<=N; j=j+i){
                if(!arr[j]) {
                    //cout << j << ' ';
                    arr[j]=true;
                    cnt++;
                    if (cnt==K) {
                        cout << j;
                        break;
                    }
                }
                
            }
        }
        if(cnt>=K) break;
    }
    return 0;
}