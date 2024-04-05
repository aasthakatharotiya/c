#include<stdio.h>
#include<string.h>
 main(){
 	//Question-1
 	
// 	char str_1[100];
// 	printf("Enter String For UpperCase :");
// 	gets(str_1);
// 	puts(strupr(str_1));
 	
 	
 	//Question-2
 	
// 	char str_2[100];
// 	printf("Enter String For LowerCase :");
// 	gets(str_2);
// 	puts(strlwr(str_2));
 	
 	
 	//Question-3
 	
// 	char str_3[100];
// 	printf("Enter String For Length :");
// 	gets(str_3);
// 	printf("%d",strlen(str_3));


	//Question-4
 	
// 	char str_4[100];
// 	printf("Enter String :");
// 	gets(str_4);
// 	puts(str_4);
 	
 	
 	//Question-5
 	
// 	char first_str[100],last_str[100],full_str[200];
// 	printf("Enter First String :");
// 	gets(first_str);
// 	printf("Enter Second String :");
//	gets(last_str);
//	strcpy(full_str,strcat(first_str,last_str));
// 	puts(full_str);


	//Question-6
 	
 	char string_1[100],string_2[100];
 	
 	printf("Enter First String :");
 	gets(string_1);
 	printf("Enter Second String :");
	gets(string_2);
	if(strcmp(string_1,string_2)==0)
	{
		printf("Strings Are Equals");
	}
	else
	{
		printf("Strings Are Not Equals");
	}
 	
 }
