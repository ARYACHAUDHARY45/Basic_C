#include<stdio.h>
int main (){
    float radius;
    float area;
    printf("Enter Radius of circle: ");
    scanf("%f",&radius);
    area=3.14 * radius*radius;
    printf("Area is = %.2f .",area);
    return 0;
}