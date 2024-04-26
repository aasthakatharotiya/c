#include <stdio.h>

int main()
{
    int i;

    //Question-1

    int size_sum, sum=0;
    int arr_sum[size_sum];
    printf("Enter Array Size : ");
    scanf("%d",&size_sum);
    for(i=0; i<size_sum; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_sum[i]);
    }
    for(i=0; i<size_sum; i++)
    {
        sum += arr_sum[i];
    }
    printf("Sum Of All Numbers : %d",sum);
    printf("\n\n");


    //Question-2

    int size_max, arr_max[size_max], max=arr_max[0];
    printf("Enter Array Size : ");
    scanf("%d",&size_max);
    for(int i=0; i<size_max; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_max[i]);
    }
    for(int i=0; i<size_max; i++)
    {
        if(arr_max[i]>max)
        {
            max = arr_max[i];
        }
    }
    printf("Maximum Number is : %d",max);
	printf("\n\n");


    //Question-3

    int size_rev, arr_rev[size_rev];
    printf("Enter Array Size : ");
    scanf("%d",&size_rev);
    for(i=0; i<size_rev; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_rev[i]);
    }
    printf("\n---After Reverse---\n");
    for(i=size_rev-1; i>=0; i--)
    {
        printf("\na[%d] = %d",i,arr_rev[i]);
    }
    printf("\n\n");


    //Question-4

    int size_arr1, size_arr2, arr_1[size_arr1], arr_2[size_arr2];
    printf("Enter First Array Size : ");
    scanf("%d",&size_arr1);
    for(i=0; i<size_arr1; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_1[i]);
    }
    
    printf("Enter Second Array Size : ");
    scanf("%d",&size_arr2);
    for(i=0; i<size_arr2; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_2[i]);
    }
    
    int resize;
    int merge_arr[resize];
    for(i=0; i<size_arr1; i++)
    {
        merge_arr[i] = arr_1[i];
    }
    for(i=0; i<size_arr2; i++)
    {
        merge_arr[i + size_arr1] = arr_2[i];
        resize++;
    }
    printf("---After Merge Array---");
    for(i=0; i<size_arr1+size_arr2; i++)
    {
        printf("\na[%d] = %d",i,merge_arr[i]);
    }


    return 0;
}

