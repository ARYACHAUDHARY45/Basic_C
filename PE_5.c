#include<stdio.h>
int main (){
    int m,n;
    int sum=0;
    printf("Enter Small integer : ");
    scanf("%d",&m);
    printf("Enter Large integer : ");
    scanf("%d",&n);
    int i=m;
    while(i <= n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of numbers from %d to %d is equal to %d .",m,n,sum);
    return 0;
}