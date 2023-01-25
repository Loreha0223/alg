#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    A=A+(B+C)/60;
    if(A>=24) A=A-24;
    B=(B+C)%60;
    cout << A << ' ' << B;
}