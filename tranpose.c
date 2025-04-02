#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows (max %d): ", 100); // assuming a maximum of 100 rows
    scanf("%d", &rows);

    printf("Enter the number of columns (max %d): ", 100); // assuming a maximum of 100 columns
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transposed[cols][rows]; // Fixed the declaration of the transposed matrix

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Transposing the matrix
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            transposed[i][j] = matrix[j][i];
        }
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            printf("%d\t", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
