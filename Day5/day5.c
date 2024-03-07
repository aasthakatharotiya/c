#include <stdio.h>

void main(){

    //Question-1

    int price,percentage;
    float discount;
    printf("Enter Original Price : ");
    scanf("%d",&price);
    printf("Enter Discount Percentage : ");
    scanf("%d",&percentage);
    discount=(price*percentage)/100;
    printf("Discount Amount is : %0.2f",discount);


    //Question-2

    float weight,height,BMI;
    printf("Enter Weight in Kilograms : ");
    scanf("%f",&weight);
    printf("Enter Height in Meters : ");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf("Body Mass Index (BMI) : %0.2f ",BMI);


    //Question-3

    int angle_1, angle_2, angle_3;
    printf("First Angle : ");
    scanf("%d",&angle_1);
    printf("Second Angle : ");
    scanf("%d",&angle_2);
    angle_3=180-(angle_1+angle_2);
    printf("Third Angle : %d",angle_3);

}