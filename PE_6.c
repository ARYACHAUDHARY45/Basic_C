#include<stdio.h>
int main (){
    int  n;
    printf("Enter an integer : ");
    scanf("%d",&n);
    int sum=0,i=0;
    
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    float avg= (float)sum / n ;
    printf(" The average of first %d number is %f .",n,avg);
    
    return 0;
}