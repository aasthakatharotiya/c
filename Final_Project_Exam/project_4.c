#include <stdio.h>

int main()
{
    int year;
    printf("Enter Any Year : ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("%d is Leap Year...",year);
    }
    else{
        printf("%d is Not Leap Year...",year);
    }

    return 0;
}
