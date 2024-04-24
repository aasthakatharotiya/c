//Question-5 
#include <stdio.h>

num_swap(int *n1, int *n2)
{
    int *temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    printf("--- After Swapping ---");
    printf("\nFirst Number : %d",*n1);
    printf("\nSecond Number : %d",*n2);
}

int main()
{
    int *p;
    int num_1,num_2;
    printf("Enter First Number : ");
    scanf("%d",&num_1);
    printf("Enter Second Number : ");
    scanf("%d",&num_2);
    
    num_swap(&num_1, &num_2);
    
    return 0;
}