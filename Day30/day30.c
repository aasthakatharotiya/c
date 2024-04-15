#include <stdio.h>

int main()
{
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    int arr[size];
    int *p;
    p = &arr;
    for(int i=0; i<size; i++)
    {
        printf("Enter Array Elements : ");
        scanf("%d",&p[i]);
    }
    
    printf("\n----Reverse Elements----\n");
    for(int i=size-1; i>=0; i--)
    {
        printf("%d    ",*(p+i));
    }
    

    return 0;
}
