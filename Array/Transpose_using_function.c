#include <stdio.h>

//Function Prototype
void transpose(int matrix[][20], int n);

int main(){
    int n;
    printf("Enter the dimension of matrix:");
    scanf("%d", &n);

    int a[20][20];

    printf("Enter elements of the matrix:\n");
    for(int i =0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    //Displaying the matrix
    printf("\nThe matrix is:\n");
    for(int i = 0; i<n; ++i){
        for(int j =0; j<n; ++j){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    transpose(a, n);

    return 0;
}

//Function definition
void transpose(int matrix[][20], int n){
    int transpose[n][n];
    // Transpose of the matrix
    for(int i = 0 ; i <n; ++i){
        for( int j = 0; j< n; ++j){
            transpose[i][j]= matrix[j][i];
        }
    }

    // Displaying transpose of the matrix
    printf("\nThe transpose of the matrix is:\n");
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}

