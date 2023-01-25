#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int total = 0;
    vector<int>arr;
    int a;
    for (int i=0; i<3; i++){
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    if(arr[0]!=arr[1] && arr[1]!=arr[2]) total = arr[0]*100;
    else if (arr[0]!=arr[1]||arr[1]!=arr[2]) total = arr[1]*100+1000;
    else total = 10000+arr[0]*1000;
    cout << total;
}