#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int visited[100001];
vector<int> graph[100001];
int N, M, R;
int cnt = 1;

int dfs(int u){
    if(visited[u] == true && u!=R) return 0;
    for (int i=0; i<graph[u].size(); i++){
        int x = graph[u][i];
        if (!visited[x]) {
            visited[x]=cnt++;
            dfs(graph[u][i]);
        }
    }
    return 0;
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    cin >> N >> M >> R;
    int u,v;
    for (int i=0; i<M; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i=1; i<=N; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    visited[R]=cnt++;
    dfs(R);
    for (int i=1; i<=N; i++) cout << visited[i] << '\n';
    return 0;
}
