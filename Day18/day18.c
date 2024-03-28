#include <stdio.h>

void main(){

    //Question-1
    //* * * * *
    //  * * * *
    //    * * *
    //      * *
    //        *


    for(int i=1; i<=5; i++)
    {
        for(int k=i; k>=1; k--)
        {
            printf("  ");
        }
        for(int j=i; j<=5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-2
    //* * * * *
    // * * * *
    //  * * *
    //   * * 
    //    * 

    for(int i=1; i<=5; i++)
    {
        for(int k=i; k>=1; k--)
        {
            printf(" ");
        }
        for(int j=i; j<=5; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-3
    //* * * * 
    //  * * * * 
    //    * * * * 
    //      * * * * 

   for(int i=1; i<=5; i++)
    {
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-4
    //    * 
    //   * * 
    //  * * *
    // * * * *
    //  * * *
    //   * * 
    //    * 

    for(int i=1; i<=3; i++)
    {
        for(int k=i; k<=3; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(int i=1; i<=4; i++)
    {
        for(int k=i; k>=1; k--)
        {
            printf(" ");
        }
        for(int j=i; j<=4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-5
    //* * * *
    // * * *
    //  * *
    //   *
    //  * *
    // * * *
    //* * * *

    for(int i=1; i<=4; i++)
    {
        for(int k=i; k>=1; k--)
        {
            printf(" ");
        }
        for(int j=i; j<=4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1; i<=4; i++)
    {
        for(int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n\n");


    //Question-6
    //* * * * *
    //*       *
    //*       *
    //*       *
    //*       *
    //* * * * *

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(i==2 && (j>1 && j<5) || i==3 && (j>1 && j<5) || i==4 && (j>1 && j<5) )
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
    printf("\n\n\n");


    //Question-7
    //    *
    //   * *
    //  *   *
    // *     *
    // * * * * *

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<2*(5-i)-1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<2*i+1; k++)
            {
                if(k==0 || k==2*i || i==5-1)
                {
    				printf("* ");
    			}
    			else
    			{
    				printf("  ");
    			}
            }
        printf("\n");
    }
    printf("\n\n\n");



    //Question-8
    //* * * * *
    // *     *
    //  *   *
    //   * *
    //    *

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<2*i+1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<2*(5-i)-1; k++)
            {
                if(k==0 || k==2*(5-i)-2 || i==0)
                {
    				printf("* ");
    			}
    			else
    			{
    				printf("  ");
    			}
            }
        printf("\n");
    }
    printf("\n\n\n");
    

}