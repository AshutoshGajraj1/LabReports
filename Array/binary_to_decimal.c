#include <stdio.h>
#include <math.h>

int Decimal(int bit[], int size);   //Function prototype

int main(){
    int size = 0, b, temp;

    printf("Enter the binary number: ");
    scanf("%d", &b);

    temp = b;
    while(temp != 0){
        size++;
        temp = temp / 10;
    }

    int bit[size];
    for(int i = 0; i<size; i++){
        bit[i] = b % 10;
        b = b / 10;
    }

    //Function call
    int d = Decimal(bit, size); 

    printf("The decimal number is %d", d);

    return 0;
}

//Funtion Definition
int Decimal(int bit[], int size){
    int decimal = 0;
    for(int i = 0; i< size; i++){
        decimal += bit[i]*pow(2,i);
    }

    return decimal;
}