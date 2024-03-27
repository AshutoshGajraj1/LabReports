#include <stdio.h>
#include <string.h>

//structure definition
struct student{
    char name[20];
    int roll;
    float gpa;
};

//Function for sorting
struct student* bubble_sort(struct student array[], int n){
    struct student temp;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(strcmp(array[j].name,array[j+1].name)>0){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    return array;
}

int main(){

    struct student s[5];    //creating structure variable
    struct student* sorted;   

    //taking inputs
    printf("Enter the student's name, roll, gpa: ");
    for(int i = 0; i<5; i++){
        scanf("%s%d%f", s[i].name, &s[i].roll, &s[i].gpa);
    }

    size_t len = sizeof(s)/sizeof(s[0]);

    sorted = bubble_sort(s, len);   //Function call

    //displaying outputs
    printf("Name\tRoll\tgpa\n");
    for(int i = 0; i<5; i++){
        printf("%s\t%d\t%.2f\n", sorted[i].name, sorted[i].roll,sorted[i].gpa);
    }
}

// #include <stdio.h>
// #include <string.h>

// // Structure definition
// struct student {
//     char name[20];
//     int roll;
//     float gpa;
// };

// // Function for sorting
// void bubble_sort(struct student array[], int n) {
//     struct student temp;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (strcmp(array[j].name, array[j + 1].name) > 0) {
//                 temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     struct student s[5]; // Creating structure variable

//     // Taking inputs
//     printf("Enter the student's name, roll, gpa: ");
//     for (int i = 0; i < 5; i++) {
//         scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].gpa);
//     }

//     size_t len = sizeof(s) / sizeof(s[0]);

//     bubble_sort(s, len); // Function call to sort the array in place

//     // Displaying outputs
//     printf("Name\tRoll\tGPA\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].gpa);
//     }

//     return 0;
// }
