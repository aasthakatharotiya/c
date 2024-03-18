#include <stdio.h>

void main(){

    //Question-1

    int num_1=1;
    do{
        printf("%d  ",num_1);
        num_1++;
    }while(num_1<=10);
    printf("\n\n");

    
    //Question-2
    
    int num_2;
    for(num_2=10; num_2>=1; num_2--)
    {
        printf("%d  ",num_2);
    }
    
    

    //Question-3
    
    int num_3, start=0;
    printf("Enter Number : ");
    scanf("%d",&num_3);
    
    do{
        printf("%d  ",start);
        start+=2;
    }while(start<=num_3);
    

    
    //Question-4
    
    int first=0,second=1,next,i,ans;
    
    printf("Enter Number : ");
    scanf("%d",&next);
    
    for(i=0; i<=next; i++)
    {
        printf("%d  ",first);
        ans=first+second;
        first=second;
        second=ans;
    }

}