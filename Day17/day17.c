#include <stdio.h>

void main(){

    //Question-1
    //Prime Or Not

    int num, is_prime = 1;
    printf("Enter Prime Number : ");
    scanf("%d",&num);
    
    if(num<=1 || (num>2 && num%2==0)) {
        is_prime = 0;
    } 
    else{
        for(int i=3; i*i<=num; i+=2) {
            if(num%i==0) {
                is_prime = 0;
                break;
            }
        }
    }

    printf("%d is %s a prime number.\n", num, is_prime ? "" : "not");
    printf("\n\n");

    //Question-2
    //Factorial

    int num_2,i_2,fact=1;
    printf("Enter Number : ");
    scanf("%d",&num_2);
    for(i_2=1; i_2<=num_2; i_2++)
    {
        fact*=i_2;
    }
    printf("Factorial Of All Number : %d",fact);
    printf("\n\n");


    //Question-3
    //        5
    //      4 5 4
    //    3 4 5 4 3
    //  2 3 4 5 4 3 2
    //1 2 3 4 5 4 3 2 1

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
        for(int j=4; j>=i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n\n");

    //Question-4
    // * * * * *
    // *       *
    // * * * * *
    // *       *
    // *       *

    for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if (i==2 && (j>1 && j<5) || i==4 && j>1 && j<5 || i==5 && j>1 && j<5 )
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

}