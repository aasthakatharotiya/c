#include <stdio.h>

void main(){

    // Addition

    int sum_1, sum_2, sum_ans;
    printf("Enter First Number: ");
    scanf("%d",&sum_1);
    printf("Enter Second Number: ");
    scanf("%d",&sum_2);
    sum_ans=sum_1+sum_2;
    printf("Addition of Two Number is: %d",sum_ans);



    //Multiplication

    int mul_1, mul_2, mul_ans;
    printf("\n\nEnter First Number: ");
    scanf("%d",&mul_1);
    printf("Enter Second Number: ");
    scanf("%d",&mul_2);
    mul_ans=mul_1*mul_2;
    printf("Multiplication of Two Number is: %d",mul_ans);



    //Average
    
    int avg_1, avg_2, avg_3, avg_ans;
    printf("\n\nEnter First Number: ");
    scanf("%d",&avg_1);
    printf("Enter Second Number: ");
    scanf("%d",&avg_2);
    printf("Enter Third Number: ");
    scanf("%d",&avg_3);
    avg_ans=(avg_1+avg_2+avg_3)/3;
    printf("Average of Three Number is: %d",avg_ans);



    //Square

    int square, squ_ans;
    printf("\n\nEnter Number: ");
    scanf("%d",&square);
    squ_ans=square*square;
    printf("Square of Number is: %d",squ_ans);



    //Simple Interest

    int p, r, t, simple_interest;
    printf("\n\nEnter Value for Principal Amount: ");
    scanf("%d",&p);
    printf("Enter Value for Rate Of Interest: ");
    scanf("%d",&r);
    printf("Enter Value for Time Period: ");
    scanf("%d",&t);
    simple_interest=(p*r*t)/100;
    printf("Result Of Simple Interest: %d",simple_interest);



    //power

    int base, power_ans;
    printf("\n\nEnter Value for Base: ");
    scanf("%d",&base);
    power_ans=base*base*base;
    printf("Result Of Power: %d",power_ans);


    //Velocity

    int Time, distance, velocity_ans;
    printf("\n\nEnter Value for Time: ");
    scanf("%d",&Time);
    printf("Enter Value for Distance: ");
    scanf("%d",&distance);
    velocity_ans=Time/distance;
    printf("Result Of Velocity: %d",velocity_ans);


    
    //Arithmetic Expression

    int a, b, c, d, arithmetic_ans;
    printf("\n\nEnter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
    scanf("%d",&c);
    printf("Enter Fourth Number: ");
    scanf("%d",&d);
    arithmetic_ans=(a+b)*(c-d);
    printf("Result Of Arithmetic Operation: %d",arithmetic_ans);

}