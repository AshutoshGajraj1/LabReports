#include <stdio.h>

void bubble_sort(int array[], size_t len);       //Function Prototype

int main(){

    int n;

    printf("Enter the array size: ");
    scanf("%d", &n);

    int num[n];

    printf("Enter the array elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &num[i]);
    }

    size_t len = sizeof(num)/sizeof(num[0]);

    bubble_sort(num, len);               //Function Call
}

//Function Definition
void bubble_sort(int array[],size_t len){
    int temp;

    for(int i = 0; i<len-1; i++){
        for(int j = 0; j<len-i-1; j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }

    for(int i = 0; i< len; i++){
        printf("%d\t", array[i]);
    }
}