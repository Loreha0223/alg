#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool arr[1000001];
int main(){
    int M,N;
    cin >> M >> N;
    for (int i=2; i<N; i++){
        if(!arr[i]){
            for(int j=2*i; j<=N;j=j+i){
                arr[j]=true;
            }
        }
    }
    for (int i=M; i<=N; i++){
        if (!arr[i])cout << i << '\n';
    }
    return 0;
}