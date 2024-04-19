#include<stdio.h>
int main(){
    FILE *p;
    char data[100];

    p = fopen("demo.txt","r");

    if(p == NULL)
    {
        printf("Can't Open File");
    }
    else
    {
        printf("Open File");

        while(fgets(data, 50, p) != NULL)
        {
            printf("\n%s",data);
        }
        
    }

    return 0;
}
