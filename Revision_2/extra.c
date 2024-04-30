#include <stdio.h>

int main() {
    int number, i, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    int original = number;
    int temp = original;

    while (temp > 0)
	{
        temp /= 10;
        digits++;
    }

    temp = original;

    while (temp > 0)
	{
        int digit = temp % 10;
        int product = 1;

        for (i = 0; i < digits; i++)
		{
            product *= digit;
        }

        sum += product;
        temp /= 10;
    }

    if (sum == original)
	{
        printf("%d is Armstrong Number...", original);
    }
	else
	{
        printf("%d is not Armstrong Number...", original);
    }

    return 0;
}









//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int number, temp, sum = 0;
//    printf("Enter a number: ");
//    scanf("%d", &number);
//
//    int original = number;
//    int n = (number < 0) ? -number : number;
//    int digits = (int)log10(n) + 1;
//
//    for(temp = n; temp > 0; temp /= 10)
//	{
//        int digit = temp % 10;
//        sum += pow(digit, digits);
//    }
//
//    if (sum == original)
//	{
//        printf("%d is Armstrong number...", original);
//    } 
//	else
//	{
//        printf("%d is not Armstrong number...", original);
//    }
//
//    return 0;
//}






//#include <stdio.h>
//
//int main() {
//	int i,j,k;
//    int row_1, col_1, row_2, col_2;
//	printf("-----Enter First Array Values-----\n");
//    printf("Enter Row : ");
//    scanf("%d",&row_1);
//    printf("Enter Column : ");
//    scanf("%d",&col_1);
//    
//    int arr_1[row_1][col_1];
//    
//    for(i=0; i<row_1; i++)
//    {
//        for(j=0; j<col_1; j++)
//        {
//            printf("a[%d][%d] = ",i,j);
//            scanf("%d",&arr_1[i][j]);
//        }
//    }
//    
//    printf("\n-----Enter Second Array Values-----\n");
//    printf("Enter Row : ");
//    scanf("%d",&row_2);
//    printf("Enter Column : ");
//    scanf("%d",&col_2);
//    
//    int arr_2[row_2][col_2];
//    
//    for(i=0; i<row_2; i++)
//    {
//        for(j=0; j<col_2; j++)
//        {
//            printf("a[%d][%d] = ",i,j);
//            scanf("%d",&arr_2[i][j]);
//        }
//    }
//    printf("\n-----First Array-----\n");
//    for(i=0; i<row_1; i++)
//    {
//        for(j=0; j<col_1; j++)
//        {
//            printf("%3d",arr_1[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n-----Second Array-----\n");
//    for(i=0; i<row_2; i++)
//    {
//        for(j=0; j<col_2; j++)
//        {
//            printf("%3d",arr_2[i][j]);
//        }
//        printf("\n");
//    }
//
//    if (col_1 != row_2)
//	{
//        printf("Matrix multiplication is not possible.\n");
//        return 1;
//    }
//
//    int result[10][10];
//
//    for (i = 0; i < row_1; i++) 
//	{
//        for (j = 0; j < col_2; j++) 
//		{
//            result[i][j] = 0; 
//        }
//    }
//
//    for (i = 0; i < row_1; i++)
//	{
//        for (j = 0; j < col_2; j++)
//		{
//            for (k = 0; k < col_1; k++)
//			{
//                *(*(result + i) + j) += *(*(arr_1 + i) + k) * *(*(arr_2 + k) + j);
//            }
//        }
//    }
//
//    printf("\n-----Multiply Two Matrices-----\n");
//    for (i = 0; i < row_1; i++)
//	{
//        for (j = 0; j < col_2; j++)
//		{
//            printf("%3d", *(*(result + i) + j));
//        }
//        printf("\n");
//    }
//        
//
//    return 0; // Successful exit
//}

