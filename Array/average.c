#include <stdio.h>

//Function prototype
float average(int num[], int size);

int main(){

    int n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int num[n];
    //Taking inputs
    printf("Enter the numbers: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &num[i]);
    }

    //Function Call
    float avg = average(num, n);

    printf("The average is %.2f", avg);
    return 0;
}


//Function definition
float average(int num[], int size){
    int sum = 0;
    //Finding total sum
    for(int i =0; i<size; i++){
        sum += num[i];
    }

    return (float)sum/size;
}
