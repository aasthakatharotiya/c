#include <stdio.h>

int main() 
{
    //Question-16

    int fact=1, num_fact;
    printf("Enter Any Number : ");
    scanf("%d",&num_fact);
    for(int i=1; i<=num_fact; i++)
    {
        fact = fact*i;
    }
    printf("Factorial Number is : %d",fact);


    //Question-17

    int first=0,second=1,next,i=0,ans;
    
    printf("Enter Number : ");
    scanf("%d",&next);
    
    while(i<=next)
    {
        printf("%d  ",first);
        ans=first+second;
        first=second;
        second=ans;
        i++;
    }


    //Question-18

    int num, i, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        if (num % 2 == 0) {
            is_prime = 0;
            break;
        }
        i++;
    } while (i * i <= num);

    if (is_prime && num > 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }


    //Question-19

    int sum_num,sum=0;
    printf("Enter Number : ");
    scanf("%d",&sum_num);
    for(int i=1; i<=sum_num; i++)
    {
        sum+=i;
    }
    printf("Sum Of All Number : %d",sum);
    printf("\n\n");


    //Question-20

    int table;
    printf("Enter Ending Point : ");
    scanf("%d",&table);
    
    for(int i=1; i<=10; i++)
    {
        printf("\n%d * %d = %d",table,i,table*i);
    }


    return 0;
}
