#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {   
        for (int j = i; j <= rows; j++)
        {
                printf("*");
        }
        
        printf("\n");

    }

}