#include <stdio.h>

void main(){

    //Question-1
    //         1
    //       2 1
    //     3 2 1
    //   4 3 2 1
    // 5 4 3 2 1 

    for(int i=1; i<=5; i++)
    {
        for(int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for(int j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-2
    //         5
    //       4 5
    //     3 4 5
    //   2 3 4 5
    // 1 2 3 4 5
    
    for(int i=5; i>=1; i--)
    {
        for(int k=1; k<=i; k++)
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
    

    //Question-3
    //         5
    //       4 4 
    //     3 3 3
    //   2 2 2 2
    // 1 1 1 1 1
    
    for(int i=5; i>=1; i--)
    {
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }
        for(int j=5; j>=i; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }


    //Question-4
    // 5 4 3 2 1
    //   4 3 2 1
    //     3 2 1
    //       2 1
    //         1

    for(int i=5; i>=1; i--)
    {
        for(int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for(int j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-5
    // 5 4 3 2 1
    //   5 4 3 2
    //     5 4 3
    //       5 4
    //         5

    for(int i=1; i<=5; i++) { 
        for(int k=1; k<=i; k++) 
        { 
            printf(" "); 
        } 
        for(int j=5; j>=i; j--) 
        { 
            printf("%d",j); 
        } 
        printf("\n"); 
    }
    printf("\n\n\n");


    //Question-6
    //         *
    //       * * *
    //     * * * * * 
    //   * * * * * * * 
    // * * * * * * * * *

    for(int i=1; i<=5; i++)
    {
        for(int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for(int j=1; j<=i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-7
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=2; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n");
    


    //Question-8
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3         3 2 1
    // 1 2             2 1
    // 1                 1

    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }

        for(int k=8; k>=i*2-1; k--)
        {
            printf("  ");
        }

        for (int j=i; j>=1; j--)
        {
            printf(" %d",j);
        }
        
        printf("\n");
    }
    printf("\n\n\n");

    //Question-9
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3         3 2 1
    // 1 2             2 1
    // 1                 1
    // 1                 1
    // 1 2             2 1
    // 1 2 3         3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3 4 5 5 4 3 2 1

    
    for(int i=5; i>=1; i--)
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