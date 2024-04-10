#include <stdio.h>

//Question-1
int calculateSumOfSquares(int num)
{
    int sum=0;
    for(int i=0; i<=num; i++)
    {
        if(i%2==0)
        {
            sum += (i*i);
        }
    }
    return sum;
}


//Question-2
float calculateArea(float length, float width) {
    return length * width;  
}


//Question-3
int calculateFactorial(int fact)
{
    if(fact<=1)
    {
        return 1;
    }
    else
    {
        return fact * calculateFactorial(fact-1);
    }
}



main()
{
    //Question-1
    int num;
    printf("Enter Any Number : ");
    scanf("%d",&num);

    printf("Sum Of Square Of Even Number is : %d",calculateSumOfSquares(num));


    //Question-2
    float length, width;
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the width: ");
    scanf("%f", &width);

    printf("The area of the rectangle is: %.2f\n", calculateArea(length, width));


    //Question-3
    int fact;
    printf("Enter Any Number: ");
    scanf("%d", &fact);

    printf("Factorial is: %d", calculateFactorial(fact));
    
}