#include <stdio.h>

//Funtion Prototype
int gcd(int n1,int n2);

int main(){

    //Taking inputs
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    //Funtion Call
    int GCD = gcd(a,b);

    //Displaying the greatest common divisor
    printf("\nThe greatest common divisor is %d", GCD);

    return 0;
}

//Funtion Definition
int gcd(int n1, int n2){
    int fact[100], j = 0, temp;
    
    //Listing the common divisors
    for(int i = 1; i<n1+n2; i++){
        if(n1%i == 0 && n2%i == 0){
            fact[j] = i;
            j++;
        }
    }
    
    //Displaying all the divisors
    printf("The common diviors are: \n");
    for(int i = 0; i<j; i++){
        printf("%d\t", fact[i]);
    }

    //Checking for the highest common divisor
    for(int i = 0; i<j-1; i++){
        temp = fact[i];
        
        //Returning 1 when the common divisor is just 1
        if(j-1 == 0){
            return 1;
        }

        if(fact[i+1]>fact[i]){
            temp = fact[i+1];
        }
    }

    return temp;
}