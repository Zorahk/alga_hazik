#include <cmath>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
int T,N;
vector<vector<int>> adjList;
vector<bool> visited;
int farthest = -1;
int maxDepth = -1;

void dfs(int start,int depth) {
    visited[start] = true;
    if (depth > maxDepth) {
        maxDepth = depth;
        farthest = start;
    }
    for (int next : adjList[start]) {
        if (!visited[next]) {
            dfs(next,depth + 1);
        }
    }
}

int main() {

    scanf("%d",&T);

    while (T--) {
        scanf("%d",&N);
        adjList.clear();
        visited.clear();
        adjList.resize(N+1);
        visited.resize(N+1,false);
        for (int i = 0; i < N - 1; i++) {
            int a,b;
            scanf("%d %d",&a,&b);
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }
        maxDepth = -1;
        farthest = -1;
        dfs(0,0);
        int A = farthest;

        visited.assign(N,false);
        maxDepth = -1;
        farthest = -1;
        dfs(A,0);
        int diameter = maxDepth;

        int TTL = (diameter + 1)/2;
        printf("%d\n",TTL);
    }
    return 0;
}