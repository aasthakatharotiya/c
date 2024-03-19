#include <stdio.h>

void main(){

    //Question-1

    int num_1,i_1,sum=0;
    printf("Enter Number : ");
    scanf("%d",&num_1);
    for(i_1=1; i_1<=num_1; i_1++)
    {
        sum+=i_1;
    }
    printf("Sum Of All Number : %d",sum);
    printf("\n\n");
    

    //Question-2
    
    int num_2,i_2,fact=1;
    printf("Enter Number : ");
    scanf("%d",&num_2);
    for(i_2=1; i_2<=num_2; i_2++)
    {
        fact*=i_2;
    }
    printf("Factorial Of All Number : %d",fact);
    printf("\n\n");
    

    //Question-3
    
    int table,i_3;
    printf("Enter Ending Point : ");
    scanf("%d",&table);
    
    for(i_3=1; i_3<=10; i_3++)
    {
        printf("\n%d * %d = %d",table,i_3,table*i_3);
    }
    
}