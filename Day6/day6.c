#include <stdio.h>

void main(){

    //Question-1

    int min_1, min_2;
    printf("Enter a value of the First Number : ");
    scanf("%d",&min_1);
    printf("Enter a value of the Second Number : ");
    scanf("%d",&min_2);
    
    if(min_1 < min_2){
        printf("The Minimum Value is : %d",min_1);
    }
    else{
        printf("The Minimum Value is : %d",min_2);
    }



    //Question-2

    int max_1, max_2;
    printf("\n\nEnter a value of the First Number : ");
    scanf("%d",&max_1);
    printf("Enter a value of the Second Number : ");
    scanf("%d",&max_2);
    if(max_1 > max_2){
        printf("The Maximum Value is : %d",max_1);
    }
    else{
        printf("The Maximum Value is : %d",max_2);
    }



    //Question-3

    int num;
    printf("\n\nEnter any Number : ");
    scanf("%d",&num);
    if(num > 0){
        printf("This Number is Positive...");
    }
    else if(num == 0){
        printf("This Number is Neutral...");
    }
    else{
        printf("This Number is Negative...");
    }


    //Question-4

    int vote;
    printf("\n\nEnter any Number : ");
    scanf("%d",&vote);
    if(vote >= 18){
        printf("You can Eligible for Vote...");
    }
    else{
        printf("You can not Eligible for Vote...");
    }


    //Question-5

    int odd_even;
    printf("\n\nEnter any Number : ");
    scanf("%d",&odd_even);
    if(odd_even % 2 == 0){
        printf("%d is Even Number...",odd_even);
    }
    else{
        printf("%d is Odd Number...",odd_even);
    }


    //Question-6


    int leap;
    printf("\n\nEnter any Number : ");
    scanf("%d",&leap);
    if(leap % 4 == 0){
        printf("%d is Leap Year...",leap);
    }
    else{
        printf("%d is Leap Year...",leap);
    }


    //Question-7

    int result;
    printf("\n\nEnter Student Result : ");
    scanf("%d",&result);
    if(result >= 50){
        printf("Congratulations ! You have Passed in The Exam...");
    }
    else{
        printf("Sorry ! You Failed in The Exam, Best Of Luck For Next Time...");
    }


    //Question-8

    int grade;
    printf("\n\nEnter Student Result : ");
    scanf("%d",&grade);
    if(grade >= 90){
        printf("Congratulations ! You are Passed With A Grade...");
    }
    else if(grade >= 80 && grade <=89){
        printf("Congratulations ! You are Passed With B Grade...");
    }
    else if(grade >= 70 && grade <=79){
        printf("Congratulations ! You are Passed With C Grade...");
    }
    else if(grade >= 60 && grade <=69){
        printf("Congratulations ! You are Passed With D Grade...");
    }
    else{
        printf("Sorry ! You Failed in The Exam, Best Of Luck For Next Time...");
    }
    
}