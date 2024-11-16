#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value of a and b before swapping: ");
    scanf("%d%d",&a,&b);
    
    a=a^b;
    b=a^b;
    a=a^b;
    
    printf("After swapping a and b the values are: %d and %d",a,b);
}