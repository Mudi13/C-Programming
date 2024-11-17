#include<stdio.h>
int main()
{
    int i,j,rows;
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <rows ; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= (2*i)-1; k++)
        {
            if (i==rows || k==1 ||k==((2*i)-1) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}