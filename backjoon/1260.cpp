#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, m, v;
vector<int> graph[1001];
bool visited[1001];

void dfs(int x) {
    visited[x] = true;
    cout << x << ' ';
    for (int i = 0; i < graph[x].size(); i++) {
        int a = graph[x][i];
        if (visited[a] != true) dfs(a);
    }
}

void bfs(int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for (int i = 0; i < graph[x].size(); i++) {
            int a = graph[x][i];
            if (!visited[a]) {
                q.push(a);
                visited[a] = true;
            }
        }
    }
}


int main() {
    cin >> n >> m >> v;
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i=1; i<=n; i++) 
        sort(graph[i].begin(), graph[i].end());
    
	
    dfs(v);
    for (int i = 1; i <= n; i++) visited[i] = false;

    cout << '\n';bfs(v);
    return 0;
}