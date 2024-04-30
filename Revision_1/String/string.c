#include <stdio.h>

int main()
{
    //Question-5

  char vowel_str[100];
  int vowel=0;
  printf("Enter The String : ");
  scanf("%[^\n]s",&vowel_str);
  
  for(int i=0; vowel_str[i]; i++)
  {
      if(vowel_str[i]=='a' || vowel_str[i]=='e' || vowel_str[i]=='i' || 
      vowel_str[i]=='o' || vowel_str[i]=='u' || vowel_str[i]=='A' || vowel_str[i]=='E'
      || vowel_str[i]=='I' || vowel_str[i]=='O' || vowel_str[i]=='U')
      {
          vowel++;
      }
  }
  printf("Total Number Of Vowels in String Is : %d",vowel);


    //Question-6

   char string[100];
   int length, flag = 0;

   printf("Enter any String: ");
   scanf("%s",&string);

   for(length = 0; string[length]; length++);
   for(int i=0; i<length/2; i++)
   {
       if(string[i] != string[length-i-1])
       {
          flag = 1;
          break;
       }
   }

   if(flag == 0)
      printf("'%s' is a Palindrome String.\n", string);
   else
      printf("'%s' is Not a Palindrome String.\n", string);
   printf("\n\n");
   
    
    
    //Question-7

   char str1[100], str2[100];
   int i, j;

   printf("Enter the first string: ");
   scanf("%s", str1);

   printf("Enter the second string: ");
   scanf("%s", str2);

   for (i = 0; str1[i]; i++);
   for (j = 0; str2[j]; j++)
   {
       str1[i] = str2[j];
       i++;
   }

   printf("Concat string: %s", str1);
   printf("\n\n");


    //Question-8

    char upper[100];
    printf("Enter Any String : ");
    gets(upper);
    printf("String into UpperCase : ");
    puts(strupr(upper));
    

    return 0;
}
