#include<stdio.h>
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    if(n>0&&(n&(n-1))==0)
    printf("Number is 2's power");
    
    else
    printf("Number is not 2's power");
}