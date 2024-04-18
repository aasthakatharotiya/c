#include <stdio.h>

int main()
{
    //Question-1
    //find the sum of elements in an array

    int size_num,arr_sum[size_num],sum=0;
    printf("Enter Array Size : ");
    scanf("%d",&size_num);
    
    for(int i=0; i<size_num; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_sum[i]);
    }
    for(int i=0; i<size_num; i++)
    {
        sum += arr_sum[i];
    }
    printf("\nSum Of All Numbers is : %d",sum);



    //Question-2
    //find the largest element in an array

    int size_max,arr_max[size_max],max;
    max=arr_max[0];
    printf("\n\nEnter Array Size : ");
    scanf("%d",&size_max);
    
    for(int i=0; i<size_max; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_max[i]);
    }
    for(int i=0; i<size_max; i++)
    {
        if(arr_max[i] > max)
        {
            max = arr_max[i];
        }
    }
    printf("Maximum Number is : %d",max);


    //Question-3
    //find the smallest element in an array
    
    int min, size_min, arr_min[size_min];
 
    printf("\nEnter size of array: ");
    scanf("%d", &size_min);  
    
    for (int i = 0; i < size_min; i++)
    {   
        printf("a[%d] : ",i);
        scanf(" %d", &arr_min[i]);
    }
    min  = arr_min[0];
    for (int i = 0; i < size_min ; i++) 
    {
        if (min  > arr_min[i])
        {
       		min  = arr_min[i];
		}
        
    }
    printf("Minimum Number is : %d", min);
 

    //Question-4
    //count the number of even and odd elements in an array

    int size, even = 0, odd = 0;

    printf("\n\nEnter Size Of Array :");
    scanf("%d", &size);
    
    int odd_even[size];

    for (int i=0; i<size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d", &odd_even[i]);
    }

    for (int i=0; i<size; i++)
    {
        if (odd_even[i] % 2 == 0)
        {
            even ++;
        }
        else{
            odd++;
        }
    }
    printf("\nEven Number : %d",even);
    printf("\nOdd Number : %d",odd);

 
    //Question-5
    //reverse an array

    int size_rev, arr_rev[size_rev];
    
    printf("Enter Array Size : ");
    scanf("%d",&size_rev);
    
    for(int i=0; i<size_rev; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_rev[size_rev]);
    }
    printf("----Reverse Array----");
    for(int i=size_rev; i>0; i--)
    {
        printf("\na[%d] = %d",i,arr_rev[size_rev]);
    }


    //Question-6
    //merge two arrays into a third array

    int size_arr1, size_arr2, arr_1[size_arr1], arr_2[size_arr2], resize, merge_arr[resize], merge;
    
    printf("\n\nEnter First Array Size : ");
    scanf("%d",&size_arr1);
    
    for(int i=0; i<size_arr1; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_1[i]);
    }
    
    printf("\nEnter Second Array Size : ");
    scanf("%d",&size_arr2);
    
    for(int i=0; i<size_arr2; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_2[i]);
    }
    
    for(int i=0; i<size_arr1; i++)
    {
        merge_arr[i] = arr_1[i];
    }
    for(int i=0; i<size_arr2; i++)
    {
        merge_arr[size_arr1+i] = arr_2[i];
    }
    
    printf("\n---Merge Array---\n");
    for(int i=0; i<size_arr1 + size_arr2; i++)
    {
        printf("a[%d] = %d\n",i,merge_arr[i]);
    }



    //Question-7
    //find the second largest element in an array

    int size_larg, largest, second;
    
    printf("\n\nEnter Array Size : ");
    scanf("%d",&size_larg);
    
    int arr_larg[size_larg];
    
    for(int i=0; i<size_larg; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_larg[i]);
    }
    
    if(arr_larg[0] > arr_larg[1])
    {
        largest = arr_larg[0];
        second  = arr_larg[1];
    }
    else
    {
        largest = arr_larg[1];
        second  = arr_larg[0];
    }

    for(int i=2; i<size_larg; i++) {
        if(largest < arr_larg[i])
        {
            second = largest;
            largest = arr_larg[i];
        }
        else if(second < arr_larg[i])
        {
            second =  arr_larg[i];
        }
    }
    printf("Second largest = %d",second);   


    //Question-8
    //find the intersection of two arrays

    int size1, size2, a[size1], b[size2], intersection[size1];
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("---First array---\n");
    for (int i=0; i<size1; i++) {
        printf("a[%d] : ",i);
        scanf("%d", &a[i]);
    }
    printf("---Second array---\n");
    for (int i=0; i<size2; i++) {
        printf("a[%d] : ",i);
        scanf("%d", &b[i]);
    }

    int k = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (a[i] == b[j]) {
                int flag = 0;
                for (int l = 0; l < k; l++) {
                    if (intersection[l] == a[i]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    intersection[k++] = a[i];
                }
            }
        }
    }
    printf("Intersection of two arrays is : ");
    for(int i = 0; i < k; i++)
    {
        printf("%d ", intersection[i]);
    }
        
}
