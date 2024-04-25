#include<stdio.h>
int main(){
    FILE *p;
    int i;
    char data[100];

    p = fopen("file.txt","w");

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
    
    
    p = fopen("file.txt","a");

    if(p == NULL)
    {
        printf("Can't Open File");
    }
    else
    {
        printf("Open File");

        printf("\n--- Capitalize String ---\n");
        if(data[0]>=97 && data[0]<=122)
	  	{
	    	data[0]-=32;
	  	}
	  	for(i=1; data[i]!='\0'; i++)
	  	{
	    	if(data[i-1]==32)
	    	{
	        	if(data[i]>=97 && data[i]<=122)
	        	{
	           		data[i]-=32;
	        	}
	    	}
	  	}
	  	puts(data);
		fprintf(p, "\n\n\n---Capitalized Content---\n%s", data);
    }

    return 0;
}

