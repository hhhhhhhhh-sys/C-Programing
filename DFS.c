#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100


struct Graph {
    int V; 
    int adj[MAX_VERTICES][MAX_VERTICES];
};


void initGraph(struct Graph* g, int vertices) {
	int i,j;
    g->V = vertices;
    for ( i = 0; i < vertices; ++i) {
        for ( j = 0; j < vertices; ++j) {
            g->adj[i][j] = 0;
        }
    }
}


void addEdge(struct Graph* g, int u, int v) {
    g->adj[u][v] = 1;
    g->adj[v][u] = 1; 
}


void dfsUtil(struct Graph* g, int v, int visited[]) {
	int i;
    visited[v] = 1;
    printf("%d ", v);

    for ( i = 0; i < g->V; ++i) {
        if (g->adj[v][i] && !visited[i]) {
            dfsUtil(g, i, visited);
        }
    }
}

void dfs(struct Graph* g, int start) {
    int visited[MAX_VERTICES] = {0};
    dfsUtil(g, start, visited);
}

int main() {
    struct Graph g;
    int vertices = 6; 

    initGraph(&g, vertices);
    addEdge(&g, 0, 1);
    addEdge(&g, 0, 2);
    addEdge(&g, 1, 3);
    addEdge(&g, 2, 4);
    addEdge(&g, 3, 4);
    addEdge(&g, 3, 5);

    printf("DFS traversal starting from vertex 0:\n");
    dfs(&g, 0);

    return 0;
}