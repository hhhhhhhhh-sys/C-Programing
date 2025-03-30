#include ṇṇ<stdio.h>

#define MAX_ITEMS 100
#define MAX_CAPACITY 1000

// Function to find the maximum value in the knapsack
int knapsack(int capacity, int weights[], int values[], int n) {
    int dp[MAX_ITEMS + 1][MAX_CAPACITY + 1];

    // Initialize the dp table
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;  // Base case: no items or no capacity
            } else if (weights[i - 1] <= w) {
                // Item can be included
                dp[i][w] = (values[i - 1] + dp[i - 1][w - weights[i - 1]] > dp[i - 1][w]) 
                             ? values[i - 1] + dp[i - 1][w - weights[i - 1]] 
                             : dp[i - 1][w];
            } else {
                // Item cannot be included
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];  // Maximum value that can be achieved
}

int main() {
    int n, capacity;
    
    // Example input
    printf("Enter the number of items: ");
    scanf("%d", &n);
    
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);
    
    int weights[MAX_ITEMS], values[MAX_ITEMS];
    
    printf("Enter weights and values of items:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: Weight: ", i + 1);
        scanf("%d", &weights[i]);
        printf("Item %d: Value: ", i + 1);
        scanf("%d", &values[i]);
    }

    int maxValue = knapsack(capacity, weights, values, n);
    printf("Maximum value in the knapsack = %d\n", maxValue);

    return 0;
}
