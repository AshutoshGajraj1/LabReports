#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter the rows and column of 1st matrix:");
    scanf("%d %d", &m, &n);

    printf("Enter the rows and column of 2nd matrix:");
    scanf("%d%d", &p, &q);

    // Checking feasibility of matrix multiplication
    if (n != p) {
        printf("Multiplication of matrices not possible");
        return 0;
    }

    // Declaring the matrices
    int a[m][n], b[p][q], result[m][q];

    int *p1, *p2, *p3;

    // Creating first matrix
    printf("Enter the elements of 1st matrix\n");
    p1 = &a[0][0];
    for (int i = 0; i < m * n; i++) {
        printf("Enter a[%d][%d]: ", i / n, i % n);
        scanf("%d", p1++);
    }

    // Creating second matrix
    printf("Enter the elements of 2nd matrix\n");
    p2 = &b[0][0];
    for (int i = 0; i < p * q; i++) {
        printf("Enter b[%d][%d]: ", i / q, i % q);
        scanf("%d", p2++);
    }

    // Multiplying the matrices
    p3 = &result[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            *p3 = 0; // Initialize the result matrix element to 0
            for (int k = 0; k < n; k++) {
                *p3 += a[i][k] * b[k][j];
            }
            p3++;
        }
    }

    // Displaying the product of matrices
    printf("The product of the matrices is:\n");
    p3 = &result[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", *p3++);
        }
        printf("\n");
    }

    return 0;
}