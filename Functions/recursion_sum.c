#include <stdio.h>

//Function prototype
int sum(int n);

int main(){
    //Taking input
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    //Funtion call
    int s = sum(n);

    //Displaying output
    printf("The sum of %d natural numbers is %d", n, s);

    return 0;
}

//Function definition
int sum(int n){
    if(n != 0){
        return n + sum(n-1);
    }
    else{
        return n;
    }
}