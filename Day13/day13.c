#include <stdio.h>

void main(){

    //Question-1

    char alpha='a';
    do
    {
        printf("%c  ",alpha);
        alpha+=4;
        
    }while(alpha <='z');


    //Question-2
    
    int num_1, count=0;
    printf("Enter Any Number : ");
    scanf("%d",&num_1);
    for (; num_1 != 0; num_1 /= 10) {
        count++;
    }
    printf("Number of digits: %d\n", count);
    
    

    //Question-3
    
    int num_2, sum=0, firstDigit, lastDigit;
    printf("Enter number : ");
    scanf("%d", &num_2);

    lastDigit = num_2 % 10;

    while(num_2 >= 10)
    {
        num_2 = num_2 / 10;
    }
    firstDigit = num_2;

    sum = firstDigit + lastDigit;
    printf("Sum of First and Last Digit = %d", sum);
    
    
}