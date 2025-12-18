#include<stdio.h>
int main (){
    int a;
    printf("Enter any integer : ");
    scanf("%d",&a);
    int flag=0;
    for(int i=2;i<a/2;i++){
        if (a % i ==0){
            flag=1;
            break;
        }
    }
    if (flag==1) printf("Number %d is composite . ",a);
    else printf("Number %d is prime number.",a);
    return 0;
}