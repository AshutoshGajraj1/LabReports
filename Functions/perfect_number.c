#include <stdio.h>

//Funtion Prototype
int perfect(int n);

int main(){

    //Taking input
    int a; 
    printf("Enter a number: ");
    scanf("%d", &a);

    //Calling the funtion
    int result = perfect(a);


    //Displaying output
    if(result == a){
        printf("%d is a perfect number.", a);
    }
    else{
        printf("%d is not a perfect number.", a);
    }

    return 0;
}

//Funtion Definition
int perfect(int n){
    int sum = 0;
    for(int i = 0; i<n; i++ ){
        if(n % i == 0){
            sum += i;
        }
    }

    return sum;
}