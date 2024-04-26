#include <stdio.h>

//Question-1

struct Student
{
    char name[100];
    int RollNo;
    int marks;
}s[100];

//Question-2

struct Marks
{
    int science;
    int maths;
    int hindi;
    int english;
    int gujarati;
}m[100];

//Question=3

struct Date {
    int day;
    int month;
    int year;
};



int main()
{
    //Question-1

    int stu_size;
    printf("Enter Size : ");
    scanf("%d",&stu_size);
    
    for(int i=1; i<=stu_size; i++)
    {
        printf("\n---Enter %d Student Information---\n",i);
        
        printf("Enter Student Name : ");
        scanf("%s",&s[i].name);
        
        printf("Enter Student RollNo : ");
        scanf("%d",&s[i].RollNo);
        
        printf("Enter Student Marks : ");
        scanf("%d",&s[i].marks);
    }
   
    for(int i=1; i<=stu_size; i++)
    {
        printf("\n---%d Student Information---",i);
        
        printf("\nStudent Name : %s",s[i].name);
        
        printf("\nStudent RollNo : %d",s[i].RollNo);
        
        printf("\nStudent Marks : %d",s[i].marks);
    }


    //Question-2

    int stu_mark;
    float total_marks;
    printf("Enter Size : ");
    scanf("%d",&stu_mark);
    
    for(int i=1; i<=stu_mark; i++)
    {
        printf("\n---Enter %d Student Marks---\n",i);
        
        printf("Enter Science Marks : ");
        scanf("%d",&m[i].science);
        
        printf("Enter Maths Marks : ");
        scanf("%d",&m[i].maths);
        
        printf("Enter Hindi Marks : ");
        scanf("%d",&m[i].hindi);
        
        printf("Enter English Marks : ");
        scanf("%d",&m[i].english);
        
        printf("Enter Gujarati Marks : ");
        scanf("%d",&m[i].gujarati);
    }
   
    for(int i=1; i<=stu_mark; i++)
    {
        printf("\n---%d Student Information---",i);
        
        total_marks = ((m[i].science + m[i].maths + m[i].hindi + m[i].english + m[i].gujarati) * 100)/500;
        
        printf("\nAverage Marks is : %0.2f",total_marks);
    }



    //Question-3

    struct Date date1, date2;

    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if (date1.year < date2.year || date1.month < date2.month || date1.day < date2.day)
    {
        printf("First date comes first.\n");
    } 
    else if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day)
    {
        printf("Both dates are the same.\n");
    } 
    else
    {
        printf("Second date comes first.\n");
    }


    return 0;
}