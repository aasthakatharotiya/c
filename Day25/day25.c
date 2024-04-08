#include <stdio.h>


//Question-1

addNumbers(int x1,int y1){
    printf("First Numbera is : ");
    scanf("%d",&x1);
    
    printf("Second Numbera is : ");
    scanf("%d",&y1);
    
    printf("Sum Of Two Numberm is : %d",x1+y1);
}

//Question-2

multiplyNumbers(int x2,int y2){
    printf("First Numbera is : ");
    scanf("%d",&x2);
    
    printf("Second Numbera is : ");
    scanf("%d",&y2);
    
    printf("Sum Of Two Numberm is : %d",x2*y2);
}

//Question-3

divideNumbers(int x3,int y3){
    printf("\n\nFirst Numbera is : ");
    scanf("%d",&x3);
    
    printf("Second Numbera is : ");
    scanf("%d",&y3);
    
    int q,r;
    q=x3/y3;
    r=x3%y3;

    printf("\nRemider : %d",r);
    if(r==0)
    {
        printf("\nQuotient : %d",q);
    }
}


//Question-4

calculateCube(int x4){
    printf("Enter Number For Cube : ");
    scanf("%d",&x4);
    
    printf("Sum Of Two Numberm is : %d",x4*x4*x4);
}


//Question-5

calculateSquare(int x5){
    printf("Enter Number For Cube : ");
    scanf("%d",&x5);
    
    printf("Sum Of Two Numberm is : %d",x5*x5);
}


//Question-6

printfHello(){
    printf("Hello, World!");
}


//Question-7

printfNumber(){
    for(int i=1; i<=10; i++)
    {
        printf("\n%d",i);
    }
}


//Question-8

printfTable(int x8){
    printf("Enter Number For Table : ");
    scanf("%d",&x8);
    
    for(int i=1; i<=10; i++)
    {
        printf("\n%d * %d = %d",x8,i,x8*i);
    }
}


main()
{
    //Question-1
    int a1,b1;
    addNumbers(a1,b1);

    //Question-2
    int a2,b2;
    multiplyNumbers(a2,b2);

    //Question-3
    int a3,b3;
    divideNumbers(a3,b3);

    //Question-4
    int a4;
    calculateCube(a4);

    //Question-5
    int a5;
    calculateSquare(a5);

    //Question-6
    printfHello();

    //Question-7
    printfNumber();

    //Question-8
    int a8;
    printfTable(a8);

}
