#include <stdio.h>


//Question-1
int sum(int arr[],int size){
    int i,add;
    printf("Enter Arrary Elements...\n");
    for(i=0; i<size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++)
    {
        add += arr[i];
    }
    printf("Sum is : ");
    return add;
}


//Question-2
int length(char str[]){
    int result;
    result = strlen(str);
    return result;
}


//Question-3
int fact(int num){
    if(num<=1)
    {
        return 1;
    }
    else{
        return num * fact(num-1);
    }
}


main()
{
    //Question-1
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int arr[size];

    printf("%d",sum(arr,size));



    //Question-2
    char str[100];
    printf("Enter any String : ");
    scanf("%s",&str);
    
    printf("Length is : %d",length(str));



    //Question-3
    int num;
    printf("Enter any Number : ");
    scanf("%d",&num);
    
    printf("Factorial is : %d",fact(num));
}
