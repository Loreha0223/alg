#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool visited[101];
vector<int>graph[101];

int dfs(int u){
    if (visited[u]==true) return 0;
    visited[u]=true;
    for (int i=0; i<graph[u].size(); i++){
        int x = graph[u][i];
        if(!visited[x]){
            dfs(x);
        }
    }
}


int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    int N, M, cnt=-1;
    cin >> N >> M;
    int u,v;
    for (int i=1; i<=M; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1);
    for (int i=1; i<=N; i++) if(visited[i]==true) cnt++;
    cout << cnt;
    return 0;
}