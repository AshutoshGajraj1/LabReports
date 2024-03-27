#include <stdio.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n1, n2;

    printf("Enter values of n1 and n2: ");
    scanf("%d%d", &n1, &n2);

    swap(&n1, &n2);

    printf("n1 = %d\n", n1);
    printf("n2 = %d", n2);

    return 0;
}
