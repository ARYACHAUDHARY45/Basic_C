#include<stdio.h>
int main (){
    int a;
    float b;
    printf("Enter any integer : ");
    scanf("%d",&a);
    b=(float) a;
    printf("Floating varient of %d is equal to %.5f .",a,b);
    return 0;
}