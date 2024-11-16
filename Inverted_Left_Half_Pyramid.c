#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {   
        for (int j = 0; j < i-1; j++)
        {
                printf(" ");
        }

        for (int k = i; k <= rows ; k++)
        {
            printf("*");
        }

        printf("\n");

    }

}