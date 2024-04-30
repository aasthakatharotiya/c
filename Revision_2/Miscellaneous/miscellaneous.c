#include <stdio.h>

int main() 
{
    //Question-16

    int sum_num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &sum_num);

    while (sum_num != 0) 
	{
        digit = sum_num % 10;
        sum += digit;
        sum_num /= 10;
    }

    printf("Sum Of All Digits is : %d", sum);


    //Question-17

    int number, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    int original = number;
    int temp = original;

    while (temp > 0)
	{
        temp /= 10;
        digits++;
    }

    temp = original;

    while (temp > 0)
	{
        int digit = temp % 10;
        int product = 1;

        for (int i = 0; i < digits; i++)
		{
            product *= digit;
        }

        sum += product;
        temp /= 10;
    }

    if (sum == original)
	{
        printf("%d is Armstrong Number...", original);
    }
	else
	{
        printf("%d is not Armstrong Number...", original);
    }


    //Question-18

    int fact_num, fact=1;
    printf("Enter any Number : ");
    scanf("%d",&fact_num);
    for(int i=1; i<=fact_num; i++)
    {
    	fact *= i;
	}
	printf("Factorial is : %d",fact);


    //Question-19

    int sqrt_num, sqrt;
    printf("Enter Any Number : ");
    scanf("%d",&sqrt_num);

    for(int i = 0;  i * i <= sqrt_num; i++)
	{
        sqrt = i;
    }

    printf("square root is : %d", sqrt);


    return 0;
}