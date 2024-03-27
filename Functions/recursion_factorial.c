#include <stdio.h>

//Funtion prototype
int factorial(int n);

int main(){

    //Taking inputs
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    //Function call
    int fact = factorial(n);

    //Displaying output
    printf("The factorial of %d is %d", n, fact);
    return 0;
}

//Function definition
int factorial(int n){

    if(n == 1 || n == 0){
        return 1;     
    }
    else{
        return (n * factorial(n-1));
    }

}