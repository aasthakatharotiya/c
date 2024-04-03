#include <stdio.h>

main(){

    //Question-1

    char upper[]="hello world";
    printf("hello world => ");
    
    for(int i=0; upper[i]!=NULL; i++)
    {
        if(upper[i]>= 'a' && upper[i]<= 'z')
        {
            upper[i] -= 32;
        }
        printf("%c",upper[i]);
    }
    printf("\n");
    

    //Question-2

    char lower[]="HELLO WORLD";
    printf("HELLO WORLD => ");
    
    for(int j=0; lower[j]!=NULL; j++)
    {
        if(lower[j]>='A' && lower[j]<='Z')
        {
            lower[j] += 32;
        }
        printf("%c",lower[j]);
    }
    printf("\n");
}