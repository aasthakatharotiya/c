#include <stdio.h>

void main(){

    //Question-1

    for(int i=1; i<=5; i++)
    {
        for(int j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-2
    
    for(int i=5; i>=1; i--)
    {
        for(int j=i; j<=5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n");
    

    //Question-3
    
    for(int i=5; i>=1; i--)
    {
        for(int j=5; j>=i; j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-4

    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<=5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-5

    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<=5; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-6

    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<=5; j++)
        {
            if(j%2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-7

    int count=1;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    printf("\n\n\n");

    
}