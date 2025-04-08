#include <stdio.h>
#include <string.h>

// Function to find the length of LCS
void findLCS(char* X, char* Y, int m, int n) {
    int L[m+1][n+1];
    int i, j;

    // Build the LCS table in bottom-up fashion
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                L[i][j] = 0;
            } else if (X[i-1] == Y[j-1]) {
                L[i][j] = L[i-1][j-1] + 1;
            } else {
                L[i][j] = (L[i-1][j] > L[i][j-1]) ? L[i-1][j] : L[i][j-1];
            }
        }
    }

    // Length of LCS is L[m][n]
    printf("Length of LCS is %d\n", L[m][n]);

    // To print the LCS itself
    int index = L[m][n];
    char lcs[index+1];
    lcs[index] = '\0'; // Null-terminate the LCS string

    // Start from the bottom-right corner of the table
    i = m;
    j = n;
    while (i > 0 && j > 0) {
        // If current character in X[] and Y[] are same, then it is part of LCS
        if (X[i-1] == Y[j-1]) {
            lcs[index-1] = X[i-1];
            i--;
            j--;
            index--;
        }
        // If not same, then move in the direction of the larger value
        else if (L[i-1][j] > L[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("LCS is %s\n", lcs);
}

int main() {
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";

    int m = strlen(X);
    int n = strlen(Y);

    findLCS(X, Y, m, n);

    return 0;
}
