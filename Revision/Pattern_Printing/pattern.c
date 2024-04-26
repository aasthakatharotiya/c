#include <stdio.h>

int main()
{
    //Question-1

    for(int i=0; i<=5; i++)
    {
        for(int k=i; k<=5; k++)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }


    //Question-2

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i==1 && (j>0 && j<4) || i==2 && (j>0 && j<4) || i==3 && (j>0 && j<4))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }


    //Question-3

    for(int i=0; i<=5; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }


    //Question-4

    for(int i=0; i<=4; i++)
    {
        for(int k=i; k<=4; k++)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=3; i>=0; i--)
    {
        for(int k=i; k<=4; k++)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}
