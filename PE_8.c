#include<stdio.h>
void evenodd(int n){
    if (n % 2==0) printf("Number is EVEN .");
    else printf("Number is ODD. ");
}
int main (){
    int a;
    printf("Enter any integer : ");
    scanf("%d",&a);
    evenodd(a);
    return 0;
}