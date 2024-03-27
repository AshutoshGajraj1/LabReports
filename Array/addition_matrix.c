#include <stdio.h>

void add(int a[][20], int b[][20], int n, int m) {

  // Check if matrices have the same dimensions
//   if (n != m) {
//     printf("Error: Matrices must have the same dimensions for addition.\n");
//     return;
//   }

  // Create a new matrix to store the sum
  int sum[n][m];

  // Add the corresponding elements of matrices a and b
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  // Print the sum matrix
  printf("Sum of the matrices:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int a[20][20], b[20][20], n, m;

  // Get the dimensions of the matrices
  printf("Enter the number of rows and columns of the matrices (n x m): ");
  scanf("%d %d", &n, &m);

  // Get the elements of matrix a
  printf("Enter the elements of matrix A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // Get the elements of matrix b
  printf("Enter the elements of matrix B:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  add(a, b, n, m);

  return 0;
}
