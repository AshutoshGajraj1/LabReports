#include <stdio.h>

//Function prototype
int gcd(int n1, int n2);

int main(){

    //Taking inputs
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    //Function call
    int g = gcd(a,b);

    //Displaying the output
    printf("The gcd of %d and %d is %d", a, b, g);

    return 0;
}

//Functin definition
int gcd(int a, int b){              //Using Euclid's algorithm

    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}
