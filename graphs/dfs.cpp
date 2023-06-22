// O(V+E)

#include<bits/stdc++.h>
using namespace std;
const int n= 1e5+10;

vector<int> g[n] ; // graph represented as an adjacency matrix

bool visited[n];

void dfs(int v) {
    // if(visited[v]) return;
    visited[v] = true;
    // Action on V after entering V
    for (int child : g[v]) {
        //  Action on C before entering C
        if (!visited[child])
            dfs(child);
        // Action on C after exiting C
    }
    // Action on V before exiting V
}



// connected components


// cycle detection 