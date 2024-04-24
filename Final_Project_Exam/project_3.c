#include <stdio.h>

int main()
{
    for(int i=0; i<=4; i++)
    {
        for(int k=i; k<=4; k++)
        {
            printf("  ");
        }
        for(int j=0; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
    return 0;
}
