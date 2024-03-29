#include <stdio.h>

void main(){

    //Question-1

    int arr_1[5];
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_1[i]);
    }
    for(int i=0; i<=4; i++)
    {
        printf("\n%d Array Element is: %d",i,arr_1[i]);
    }


    //Question-2

    int arr_2[5],sum=0;
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_2[i]);
    }
    for(int i=0; i<=4; i++)
    {
        sum += arr_2[i];
    }
    printf("\nSum Of all Elements is: %d",sum);


    //Question-3

    int arr_3[5],avg=0;
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_3[i]);
    }
    for(int i=0; i<=4; i++)
    {
        avg += arr_3[i];
    }
    avg=avg/5;
    printf("\nAverage is: %d",avg);


    //Question-4

    int arr_4[5];
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_4[i]);
    }
    for(int i=0; i<=4; i++)
    {
        if(arr_4[i]%2!=0)
        {
            printf("\nOdd Elements: %d",arr_4[i]);
        }
    }


    //Question-5

    int arr_5[5],even=1;
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_5[i]);
    }
    for(int i=0; i<=4; i++)
    {
        if(arr_5[i]%2==0)
        {
            even *= arr_5[i];
        }
    }
    printf("\nEven Number Multiplication is : %d",even);


    //Question-6

    int arr_6[5],max=arr_6[0];
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_6[i]);
    }
    for(int i=0; i<=4; i++)
    {
        if(arr_6[i]>max)
        {
            max = arr_6[i];
        }
    }
    printf("Maximum Number is : %d",max);


    //Question-7

    int arr_7[5];
    
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Array Value :");
        scanf("%d",&arr_7[i]);
    }
    for (int j = 0; j <= 4; j++)
    {
        if(arr_7[0] > arr_7[j]){
            arr_7[0]=arr_7[j];
        }
    }
    printf("\nMinimum value is : %d\n",arr_7[0]);


    //Question-8

    int arr_8[5];
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_8[i]);
    }
    for(int i=4; i>=0; i--)
    {
        printf("\n%d Array Element is: %d",i,arr_8[i]);
    }


    //Question-9

    int arr_9[5];
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_9[i]);
    }
    for(int i=0; i<=4; i++)
    {
        printf("\n%d Square is: %d",i,arr_9[i]*arr_9[i]);
    }


}