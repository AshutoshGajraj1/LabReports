#include <stdio.h>

int main(){
    int row = 3, col = 3;
    int *p;
    int matrix[row][col];

    //Taking inputs
    for(p = &matrix[0][0]; p<=&matrix[row-1][col-1]; p++){
        printf("Enter the element: ");
        scanf("%d", p);
    }

    //Displaying outputs
    for(p = &matrix[0][0]; p<=&matrix[row-1][col-1]; p++){
        printf("%d ", *p);
        if((p-&matrix[0][0]+1)%col == 0){       //checks for the end of row
            printf("\n");
        }
    }
}