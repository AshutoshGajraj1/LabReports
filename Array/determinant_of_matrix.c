#include <stdio.h>

int minor(int matrix[][20], int n, int row, int col);
int determinant(int matrix[][20], int n) {

  // Base cases:
  if (n == 1) {
    return matrix[0][0];
  } else if (n == 2) {
    return (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
  } else {
    int det = 0;
    // Recursively calculate determinant using co-factor expansion
    for (int i = 0; i < n; i++) {
      // Get the cofactor of the element at (0, i)
      int cofactor = minor(matrix, n, 0, i);
      // Add the determinant of the minor multiplied by the cofactor
      det += (matrix[0][i] * cofactor);
    }
    return det;
  }
}

// Function to calculate the minor of a matrix
int minor(int matrix[][20], int n, int row, int col) {

  int minor_matrix[n - 1][n - 1];
  int row_index = 0;
  for (int i = 0; i < n; i++) {
    if (i == row) {
      continue;
    }
    int col_index = 0;
    for (int j = 0; j < n; j++) {
      if (j == col) {
        continue;
      }
      minor_matrix[row_index][col_index] = matrix[i][j];
      col_index++;
    }
    row_index++;
  }

  return determinant(minor_matrix, n - 1);
}

int main() {
  int matrix[20][20], n;

  // Get the dimension of the matrix
  printf("Enter the dimension of the square matrix: ");
  scanf("%d", &n);

  // Get the elements of the matrix
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  int det = determinant(matrix, n);

  printf("Determinant of the matrix: %d\n", det);

  return 0;
}
