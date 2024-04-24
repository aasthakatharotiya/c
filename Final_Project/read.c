#include<stdio.h>
 main(){
    FILE *p;
    char data[100];

    p = fopen ("demo.txt","r");

    if(p == NULL){
        printf("Sorry I'm enable to load file...");
    } else{
        printf("--Congrats! Your file has been founded--\n");
        printf("YOUR DATA ARE GIVEN BELOW\n\n");

        while(fgets (data,50,p) != NULL){
            printf("%s",data);
        }
    }
 }