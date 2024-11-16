#include<stdio.h>
#include<math.h>
void main()
{
    int num1,num2,num3,greatest;
    printf("Enter number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    greatest=(num1>num2)?
    ((num1>num3)?num1:num3):
    ((num2>num3)?num2:num3);
    printf("Greatest number is %d",greatest);
    
}