#include <stdio.h>

//Question-3 

int fact(int num_fact)
{
    if(num_fact<=1)
    {
        return 1;
    }
    else
    {
        return num_fact * fact(num_fact-1);
    }
}

int main()
{
    //Question-1

    int odd_even;
    printf("Enter any Number : ");
    scanf("%d",&odd_even);
    if(odd_even % 2 == 0)
    {
        printf("%d Number is Even...",odd_even);
    }
    else
    {
        printf("%d Number is Odd...",odd_even);
    }


    //Question-2

    int num_1, num_2, num_3;
    printf("Enter First Number : ");
    scanf("%d",&num_1);
    printf("Enter Second Number : ");
    scanf("%d",&num_2);
    printf("Enter Third Number : ");
    scanf("%d",&num_3);
    if(num_1>num_2 && num_1>num_3)
    {
        printf("%d First Number is Largest...",num_1);
    }
    else if(num_2>num_1 && num_2>num_3)
    {
        printf("%d Second Number is Largest...",num_2);
    }
    else
    {
        printf("%d Third Number is Largest...",num_3);
    }


    //Question-3

    int num_fact;
    printf("Enter any Number : ");
    scanf("%d",&num_fact);
    printf("Factorial is : %d",fact(num_fact));


    //Question-4

    int num_year;
    printf("Enter any Year : ");
    scanf("%d",&num_year);
    if(num_year % 4 == 0)
    {
        printf("%d is Leap Year...",num_year);
    }
    else
    {
        printf("%d is Not Leap Year...",num_year);
    }

    return 0;
}