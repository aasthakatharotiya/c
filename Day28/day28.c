#include <stdio.h>

//Question-1
max(int *max_1, int *max_2)
{
    if(*max_1 > *max_2)
    {
        printf("First Number %d is Maximum",*max_1);
    }
    else
    {
        printf("Seecond Number %d is Maximum",*max_2);
    }
}


//Question-2
min(int *min_1, int *min_2)
{
    if(*min_1 < *min_2)
    {
        printf("First Number %d is Minimum",*min_1);
    }
    else
    {
        printf("Seecond Number %d is Minimum",*min_2);
    }
}


//Question-3
swap(int *swap_1, int *swap_2)
{
    int *temp;
    temp = *swap_1;
    *swap_1 = *swap_2;
    *swap_2 = temp;
    
    printf("---- After Swaping ----");
    printf("\nFirst Number : %d",*swap_1);
    printf("\nSecond Number : %d",*swap_2);
}


int main()
{
    //Question-1
    int max_1,max_2;
    printf("Enter First Number : ");
    scanf("%d",&max_1);
    printf("Enter Second Number : ");
    scanf("%d",&max_2);
    
    max(&max_1, &max_2);


    //Question-2
    int min_1,min_2;
    printf("\n\nEnter First Number : ");
    scanf("%d",&min_1);
    printf("Enter Second Number : ");
    scanf("%d",&min_2);
    
    min(&min_1, &min_2);


    //Question-3
    int swap_1,swap_2;
    printf("\n\nEnter First Number : ");
    scanf("%d",&swap_1);
    printf("Enter Second Number : ");
    scanf("%d",&swap_2);
    
    swap(&swap_1, &swap_2);

}