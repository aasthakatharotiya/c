#include <stdio.h>
#include <string.h>

int main()
{
    //Question-5

    char str[100];
    int count=0;
    printf("Enter String : ");
    scanf("%s",&str);
    for(int i=0; str[i]; i++)
    {
        count++;
    }
    printf("Reverse String : ");
    for(int i=count-1; str[i]>=0; i--)
    {
        printf("%c",str[i]);
    }



   //Question-6

    char str_occur[100],target;
    int count=0;
    printf("Enter any String : ");
    scanf("%s",&str_occur);
    printf("Enter Target Character That Occur in String : ");
    scanf("%s",&target);
    for(int i=0; str_occur[i]; i++)
    {
        if(str_occur[i] == target)
        {
            count++;
        }
    }
    printf("Count Of Occur Character in String : %d",count);


    //Question-7

    char str_lower[100];
    printf ("Enter any String : ");
    scanf ("%s", &str_lower);
    for(int i = 0; str_lower[i]; i++)
	{
	    if(str_lower[i] >= 'A' && str_lower[i] <= 'Z')
	    {
		  str_lower[i] +=32;
		}
		else if(str_lower[i] >= 'a' && str_lower[i] <= 'z')
	    {
		  str_lower[i] -=32;
		}
	}
    printf ("Convert String in LowerCase : %s", str_lower);

    return 0;
}
