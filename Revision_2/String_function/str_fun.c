#include <stdio.h>
#include <string.h>

int main()
{
    //Question-12

    char com_str1[100],com_str2[100];
    int compare;
    
    printf("Enter First String : ");
    scanf("%s",&com_str1);
    printf("Enter Second String : ");
    scanf("%s",&com_str2);
    for(int i=0; com_str1[i]; i++)
    {
        for(int j=0; com_str2[j]; j++)
	    {
	        if(com_str1[i] == com_str2[j]) 
			{
		        compare = 0;
		    } 
			else 
			{
		        compare = 1;
		    }
	    }
    }
    if(compare == 0) 
	{
        printf("Both Strings are Equal...");
    } 
	else 
	{
        printf("Both Strings are Not Equal...");
    }
    
    
    //Question-13

    char str1[100], str2[100];
    printf("Enter First String : ");
    scanf("%s",&str1);
    printf("Enter Second String : ");
    scanf("%s",&str2);

    char *ptr = str1;
    while (*ptr != '\0')
	{
        ptr++;
    }
    
    strcat(ptr, str2);
    printf("Concate Both String is : %s", str1);
    
    //Question-14

    char rev_str[100];
    printf("Enter any String : ");
    scanf("%s",&rev_str);

    printf("Reverse String is : %s", strrev(rev_str));

    
    //Question-15

    char len_str[100];
    int count=0;
    printf("Enter String : ");
    scanf("%s",&len_str);
    for(int i=0; len_str[i]; i++)
    {
        count++;
    }
    printf("Length Of String is : %d",count);

    
    return 0;
}
