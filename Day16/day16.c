#include <stdio.h>

void main(){

    //Question-1
    //41
    //41 42
    //41 42 43 
    //41 42 43 44
    //41 42 43 44 45

    for(int i=41; i<=45; i++)
    {
        for(int j=41; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-2
    //11
    //12 13
    //14 15 16 
    //17 18 19 20
    //21 22 23 24 25

    int count=11;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%3d ",count);
            count++;
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-3
    //        5
    //      4 5
    //    3 4 5
    //  2 3 4 5
    //1 2 3 4 5

    for(int i=5; i>=1; i--)
    {
        for(int k=i; k>=1; k--)
        {
            printf(" ");
        }
        for(int j=i; j<=5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-4
    // 1                 1
    // 1 2             2 1
    // 1 2 3         3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3 4 5 5 4 3 2 1

    for(int i=1; i<=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for(int k=8; k>=i*2-1; k--)
        {
            printf("  ");
        }
        for(int j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n");

}