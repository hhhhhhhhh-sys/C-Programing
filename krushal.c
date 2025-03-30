#include <stdio.h>
#include<stdlib.h>

#define V 5 // Number of vertices

// Structure to represent an edge
struct Edge {
    int src, dest, weight;
};

// Structure to represent a subset for Union-Find
struct Subset {
    int parent, rank;
};

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

// Function to find the parent of a vertex
int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// Function to perform union of two subsets
void unionSets(struct Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// Kruskal's algorithm to find MST
void kruskalMST(struct Edge edges[]) {
    struct Subset subsets[V];
    struct Edge result[V];
    int e = 0, i = 0;

    // Initialize subsets
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    // Sort edges by weight
    qsort(edges, V, sizeof(struct Edge), compare);

    // Process edges
    while (e < V - 1 && i < V) {
        struct Edge nextEdge = edges[i++];

        int x = find(subsets, nextEdge.src);
        int y = find(subsets, nextEdge.dest);

        // If including this edge does not cause cycle, include it
        if (x != y) {
            result[e++] = nextEdge;
            unionSets(subsets, x, y);
        }
    }

    // Print MST edges
    printf("Edges in the Minimum Spanning Tree:\n");
    for (int j = 0; j < e; ++j)
        printf("%d - %d: %d\n", result[j].src, result[j].dest, result[j].weight);
}

int main() {
    // Test graph
    struct Edge edges[] = {
        {0, 1, 4}, {0, 2, 4}, {1, 2, 2},
        {1, 3, 5}, {2, 3, 3}, {2, 4, 4}
    };

    // Find and print MST
    kruskalMST(edges);

    return 0;
}
