#include <stdio.h>
#include <math.h>

//Structure definition
struct point{
    int x;
    int y;
};

//Funtion defintion
float distance(struct point p){
    float s = sqrt(pow(p.x,2)+pow(p.y,2));
    return s;
}


int main(){
    struct point pt;    //Creating structure variable

    //Taking input
    printf("Enter the coordinates of the point: ");
    scanf("%d%d", &pt.x, &pt.y);

    float d = distance(pt);     //Function call

    printf("The distance of (%d,%d) from origin is %.2f units.", pt.x, pt.y, d);

}