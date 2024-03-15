#include <stdio.h>

void main(){

    //Question-1

    int i_1=0;
    while(i_1<=10)
    {
        printf("%d  ",i_1);
        i_1++;
    }
    printf("\n\n\n");
    

    
    //Question-2
    
    int i_2=10;
    while(i_2>=1)
    {
        printf("%d  ",i_2);
        i_2--;
    }
    printf("\n\n\n");
    
    

    //Question-3
    
    int i_3=1,exit_1;
    printf("Enter Value For Exit Point:");
    scanf("%d",&exit_1);
    while(i_3<=exit_1)
    {
        printf("%d  ",i_3);
        i_3++;
    }
    printf("\n\n\n");
    

    
    //Question-4
    
    int i_4=1,start_1;
    printf("Enter Value For Exit Point:");
    scanf("%d",&start_1);
    while(start_1>=i_4)
    {
        if(start_1%2!=0)
        {
            printf("%d  ",start_1);
        }
        start_1--;
    }
    printf("\n\n\n");
    


    //Question-5

    int start_leap, end_leap;
    printf("Enter Starting Leap Year : ");
    scanf("%d",&start_leap);
    printf("Enter Ending Leap Year : ");
    scanf("%d",&end_leap);
    
    while(start_leap<=end_leap)
    {
        if(start_leap%4==0)
        {
            printf("%d  ",start_leap);
        }
        start_leap++;
    }   
   
}