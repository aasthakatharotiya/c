#include<stdio.h>
int main(){
    FILE *p;
    char data[100];

    p = fopen("demo.txt","a");

    if(p == NULL)
    {
        printf("Can't Open File");
    }
    else
    {
        printf("Open File");

        printf("\nEnter Any String : ");
        gets(data);
        fputs(data,p);
    }

    return 0;
}
