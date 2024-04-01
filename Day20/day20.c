#include <stdio.h>

void main(){

    //Question-1

    int arr_1[3][3];
    float avg=0;
    
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            printf("Enter Values : ");
            scanf("%d",&arr_1[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            avg += arr_1[i][j];
        }
    }
    printf("Average Of an Array : %0.2f",avg/9);
    printf("\n\n");


    //Question-2

    int arr_2[3][3],sum=0;
    
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            printf("Enter Values : ");
            scanf("%d",&arr_2[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            if(i==j)
            {
                sum += arr_2[i][j];
            }
        }
    }
    printf("Sum Of Diagonal Elements Of Array : %d",sum);
    printf("\n\n");

    //Question-3

    int arr_3[5][5],sum_boundary=0;
    
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
        {
            printf("Enter Values : ");
            scanf("%d",&arr_3[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
        {
            if(i==0 || j==0 || j==4 || i==4)
            {
                printf("%d ",arr_3[i][j]);
                sum_boundary += arr_3[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Sum Of Boundary Elements Of Array is : %d",sum_boundary);
   


}