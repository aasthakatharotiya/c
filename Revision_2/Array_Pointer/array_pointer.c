#include <stdio.h>

int main()
{
    //Question-8

    int large_size, large_arr[large_size];
    printf("Enter Array Size : ");
    scanf("%d",&large_size);
    
    for(int i=0; i<large_size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&large_arr[i]);
    }

    int largest = large_arr[0]; 
    int secondLargest = large_arr[1];

    for (int i=0; i<large_size; i++)
    {
        if (large_arr[i] > largest)
        {
        	secondLargest = largest;
            largest = large_arr[i];
        } 
        else if (large_arr[i] > secondLargest && large_arr[i] != largest)
        {
            secondLargest = large_arr[i];
        }
    }
    printf("The second largest element is %d.\n", secondLargest);


    //Question-9

    int row, col, sum=0;
    printf("Enter Row : ");
    scanf("%d",&row);
    printf("Enter Column : ");
    scanf("%d",&col);
    
    int arr_sum[row][col];
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr_sum[i][j]);
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum += arr_sum[i][j];
        }
    }
    printf("Sum Of All Number is : %d",sum);


    //Question-10

    int i,j,k;
    int row_1, col_1, row_2, col_2;
	printf("-----Enter First Array Values-----\n");
    printf("Enter Row : ");
    scanf("%d",&row_1);
    printf("Enter Column : ");
    scanf("%d",&col_1);
    
    int arr_1[row_1][col_1];
    
    for(i=0; i<row_1; i++)
    {
        for(j=0; j<col_1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr_1[i][j]);
        }
    }
    
    printf("\n-----Enter Second Array Values-----\n");
    printf("Enter Row : ");
    scanf("%d",&row_2);
    printf("Enter Column : ");
    scanf("%d",&col_2);
    
    int arr_2[row_2][col_2];
    
    for(i=0; i<row_2; i++)
    {
        for(j=0; j<col_2; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr_2[i][j]);
        }
    }
    printf("\n-----First Array-----\n");
    for(i=0; i<row_1; i++)
    {
        for(j=0; j<col_1; j++)
        {
            printf("%3d",arr_1[i][j]);
        }
        printf("\n");
    }
    printf("\n-----Second Array-----\n");
    for(i=0; i<row_2; i++)
    {
        for(j=0; j<col_2; j++)
        {
            printf("%3d",arr_2[i][j]);
        }
        printf("\n");
    }

    if (col_1 != row_2)
	{
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int result[10][10];

    for (i = 0; i < row_1; i++) 
	{
        for (j = 0; j < col_2; j++) 
		{
            result[i][j] = 0; 
        }
    }

    for (i = 0; i < row_1; i++) 
	{
        for (j = 0; j < col_2; j++) 
		{
            for (k = 0; k < col_1; k++) 
			{
                result[i][j] += arr_1[i][k] * arr_2[k][j];
            }
        }
    }
 
    printf("\n-----Multiply Two Matrices-----\n");
    for (i = 0; i < row_1; i++) 
	{
        for (j = 0; j < col_2; j++) 
		{
            printf("%3d", result[i][j]);
        }
	}


    //Question-11

    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int a[size1];
    int b[size2];

    int intersection[size1];
    
    for (int i = 0; i < size1; i++)
    {
        printf("Enter elements of first array: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        printf("Enter elements of second array: ");
        scanf("%d", &b[i]);
    }
    int k = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a[i] == b[j]) {
                int flag = 0;
                for (int l = 0; l < k; l++)
                {
                    if (intersection[l] == a[i])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    intersection[k++] = a[i];
                }
            }
        }
    }
    printf("Intersection of two arrays is: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", intersection[i]);
    }



    return 0;
}