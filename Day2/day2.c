#include <stdio.h>

void main(){
    // Calculate area of Circle
    printf("Area Of circle\n");
    int r=3;
    float pi=3.14;
    float area_circle=pi*r*r;
    printf("Area of Circle is: %0.2f", area_circle);
    
    
    // Calculate area of rectangle
    printf("\n\n\nArea Of Rectangle\n");
    float w=5.5;
    float l=0.25;
    float area_rectangle=w*l;
    printf("Area of Rectangle is: %0.2f", area_rectangle);
    
    
    // Calculate area of Square
    printf("\n\n\nArea Of Square\n");
    float a=0.5;
    float area_square=a*a;
    printf("Area of Square is: %0.2f", area_square);
    
    
    // Calculate two digit sum
    printf("\n\n\nSum Of Two Digit\n");
    int two_1=5, two_2=3;
    int sum_two=two_1+two_2;
    printf("Sum Of Two Digit: %d", sum_two);
    
    
    // Calculate two digit division
    printf("\n\n\nDivision Of Two Digit\n");
    int div_1=22, div_2=7;
    float division_two=div_1/div_2;
    printf("Division Of Two Digit: %0.2f", division_two);
    
    
    // Calculate three digit sum
    printf("\n\n\nSum Of Three Digit\n");
    int three_1=5, three_2=3, three_3=2;
    int sum_three=three_1+three_2+three_3;
    printf("Sum Of Three Digit: %d", sum_three);


    // Calculate three digit Multiplication
    printf("\n\n\nMultiplication Of Three Digit\n");
    int mul_1=5, mul_2=3, mul_3=2, mul_4=8;
    int mul_four=mul_1*mul_2*mul_3*mul_4;
    printf("Multiplication Of Three Digit: %d", mul_four);
    
    
    // Calculate Perimeter of Rectangle
    printf("\n\n\nPerimeter Of Rectangle\n");
    float p_length=0.5;
    float p_width=2.2;
    float perimeter_rectangle=2*p_length+p_width;
    printf("Perimeter of Rectangle is: %0.2f", perimeter_rectangle);
    
    
    // Calculate Perimeter of Square
    printf("\n\n\nPerimeter Of Square\n");
    float p_side=0.5;
    float perimeter_square =4*p_side;
    printf("Perimeter of Square is: %0.2f", perimeter_square);

}