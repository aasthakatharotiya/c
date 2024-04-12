#include <stdio.h>

//Question-1
int cube(int *num)
{
    return (*num)*(*num)*(*num);
}


//Question-2
int cube(int *num_1, int *num_2, int *num_3)
{
    int *temp;
    temp = *num_1;
    *num_1 = *num_2;
    *num_2 = *num_3;
    *num_3 = temp;
    printf("\nFirst Number : %d",*num_1);
    printf("\nSecond Number : %d",*num_2);
    printf("\nThird Number : %d",*num_3);
}



int main()
{
    //Question-1
    int num;
    printf("Enter Number For Cube : ");
    scanf("%d",&num);
    
    printf("Cube is : %d",cube(&num));



    //Question-2
    int num_1,num_2,num_3;
    printf("\n\nEnter First Number : ");
    scanf("%d",&num_1);
    printf("Enter First Number : ");
    scanf("%d",&num_2);
    printf("Enter First Number : ");
    scanf("%d",&num_3);
    
    cube(&num_1,&num_2,&num_3);
}
