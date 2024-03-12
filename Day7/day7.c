#include <stdio.h>

void main(){

    //Question-1

    int num_1,num_2,num_3;
    printf("Enter First Number:");
    scanf("%d",&num_1);
    printf("Enter Second Number:");
    scanf("%d",&num_2);
    printf("Enter Third Number:");
    scanf("%d",&num_3);
    
    if(num_1<num_2)
    {
        if(num_1<num_3)
        {
            printf("%d is Minimum Number",num_1);
        }
        else
        {
            printf("%d is Minimum Number",num_3);
        }
    }
    else
    {
        if(num_2<num_3)
        {
            printf("%d is Minimum Number",num_2);
        }
        else
        {
            printf("%d is Minimum Number",num_3);
        }
    }

    

    //Question-2

    
    int max_1,max_2,max_3,max_4;
    printf("\n\n\nEnter First Number:");
    scanf("%d",&max_1);
    printf("Enter Second Number:");
    scanf("%d",&max_2);
    printf("Enter Third Number:");
    scanf("%d",&max_3);
    printf("Enter Fourth Number:");
    scanf("%d",&max_4);
    
    
    if (max_1>max_2)
    {
        if (max_1>max_3)
        {
            if (max_1>max_4)
            {
                printf("%d : First is Maximum Number",max_1);
            }
            
        }
    }

    else if(max_2>max_3)
    {
        if (max_2>max_4)
        {
            printf("%d : Second is Maximum Number",max_2);
        }
            
    }
    else if (max_3>max_4)
    {
        printf("%d : Third is Maximum Number",max_3);
    }
    
    else
    {
        printf("%d : Fourth is Maximum Number",max_4);
    }
    
   
}