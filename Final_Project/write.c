#include<stdio.h>
 main(){
    FILE *p;
    char data[100];

    p = fopen ("demo.txt","w");

    if(p == NULL){
        printf("Sorry I'm enable to load file...");
    } else{
        printf("--Congrats! Your file has been founded--\n");
        printf("YOUR DATA ARE GIVEN BELOW\n\n");

        // fputs("new message",p);

        printf("Enter data that you want to update in your file :");
        gets(data);
        fputs(data,p);
    }
 }
