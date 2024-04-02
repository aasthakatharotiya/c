#include<stdio.h>
 main(){
    //Question-1
    
    int arr_1[5];
    for(int i=0; i<=4; i++){
        printf("Enter array elements :");
        scanf("%d",&arr_1[i]);
    }
    for(int i=0; i<=4; i++){
        if(arr_1[i]<0)
        {
            printf("\nNegative Number is : %d",arr_1[i]);
        }
    }



    //Question-2
    
    int arr_2[2][2],max=arr_2[0][0];
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            printf("Enter Value Elements : ");
            scanf("%d",&arr_2[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            if(arr_2[i][j]>max)
            {
                max=arr_2[i][j];
            }
        }
    }
    printf("Largest Number is : %d",max);
    

    //Question-3

    int arr[3][3],transpose;
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++){
            printf("enter your choice:");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix of an array:\n");
    for(int i=0; i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
         printf("%d",arr[j][i]);
        }
        printf("\n");
    }



    //Question-4

    int row, col, i, j;

    printf("Enter Size of Array :");
    scanf("%d", &row);
    col = row;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Enter Value of Array :");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    int r, sum = 0, c, sumc = 0;

    printf("Enter Number of row :");
    scanf("%d", &r);

    for (int i = r; i < row; i++)
    {
        if (i == r + 1)
        {
            break;
        }
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d\n", sum);

    printf("Enter Number of col :");
    scanf("%d", &c);

    for (int i = 0; i < row; i++)
    {
        for (int j = c; j < row; j++)
        {
            if (j == c + 1)
            {
                break;
            }
            sumc += arr[i][j];
        }
    }
    printf("%d\n", sumc);

}