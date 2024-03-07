#include <stdio.h>

void main(){

    int hours;
    printf("Enter the number of hours worked this week : ");
    scanf("%d",&hours);
    printf("Weekly pay : $%d",hours*15);
    
    
    float radius;
    printf("\nEnter the radius of the circle : ");
    scanf("%f",&radius);	
    float result=2*3.14*radius;
    printf("Circumference of the circle : %0.2f",result);
    
    
    int product_1,product_2;
    printf("\nEnter the First Product Number : ");
    scanf("%d",&product_1);
    printf("Enter the Second Product Number : ");
    scanf("%d",&product_2);
    printf("Product of 5 and 6 is : %d",product_1*product_2);


    int circle;
    float r=3.14,circle_radius;
    printf("\nEnter the radius of the circle :");
    scanf("%d", &circle);
    circle_radius=2*r*radius;
    printf("Area of the circle : %0.2f", circle_radius);


    int num_1, num_2;
    float avg;
    printf("\nEnter First Number  :");
    scanf("%d", &num_1);
    printf("Enter second Number  :");
    scanf("%d", &num_2);
    avg=(num_1 + num_2)/2;
    printf("%f", avg);


    int a, b,temp;
    printf("\nBefore Swapping");
    printf("Enter First Number  :");
    scanf("%d", &a);
    printf("Enter second Number  :");
    scanf("%d", &b);
    printf("Value of a is : %d", a);
    printf("\nValue of a is : %d", b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\nAfter Swapping");
    printf("\nValue of a is : %d", a);
    printf("\nValue of a is : %d", b);
    
}