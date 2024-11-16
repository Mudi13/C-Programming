#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    
    printf("Enter number: ");
    scanf("%d",&num);
    if(num&1)
    printf("Number is odd");
    else 
    printf("Number is even");
    
}