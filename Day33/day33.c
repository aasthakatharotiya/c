#include <stdio.h>

int main()
{
    //Question-1

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

    int a, even = 0, odd = 0;

    printf("Enter Size Of Array :");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Value of Array :");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even ++;
        }
        else{
            odd++;
        }
    }
    printf("\n");
    printf("Even :%d\n",even);
    printf("Odd :%d",odd);

 
    //Question-5

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


    return 0;


    //Question-6

    int a[50], b[50], merged[100], n1, n2;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }


    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < n1; i++) {
        merged[i] = a[i];
    }
    for(int i = 0; i < n2; i++) {
        merged[n1+i] = b[i]; 
    }


    printf("Merged array is:\n");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }    



    //Question-7

    int array[10] = {101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
    int loop, largest, second;

    if(array[0] > array[1]) {
        largest = array[0];
        second  = array[1];
    } else {
        largest = array[1];
        second  = array[0];
    }

    for(loop = 2; loop < 10; loop++) {
        if( largest < array[loop] ) {
            second = largest;
            largest = array[loop];
        } else if( second < array[loop] ) {
            second =  array[loop];
        }
    }

    printf(" Second largest - %d \n", second);   


    //Question-8

    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int a[size1];
    int b[size2];
    int intersection[size1];
    for (int i = 0; i < size1; i++) {
        printf("Enter elements of first array: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size2; i++) {
        printf("Enter elements of second array: ");
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
    printf("Intersection of two arrays is: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
        
}
