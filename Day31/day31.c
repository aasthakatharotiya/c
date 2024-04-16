#include <stdio.h>


//Question-1

struct Student{
    int stu_id;
    char stu_name[100];
    int stu_age;
    char stu_cource[100];
    char stu_city[100];
    int stu_standard;
    char stu_school[100];
}s1[100];


//Question-2

struct Employee{
    int emp_id;
    char emp_name[100];
    int emp_age;
    char emp_role[100];
    char emp_city[100];
    int emp_experience;
    char emp_company_name[100];
}c1[100];



int main()
{
    //Question-1

    for(int i=0; i<3; i++)
    {
        printf("Enter Student ID : ");
        scanf("%d",&s1[i].stu_id);
        
        printf("Enter Student NAME : ");
        scanf("%s",&s1[i].stu_name);
        
        printf("Enter Student AGE : ");
        scanf("%d",&s1[i].stu_age);
        
        printf("Enter Student COURCE : ");
        scanf("%s",&s1[i].stu_cource);
        
        printf("Enter Student CITY : ");
        scanf("%s",&s1[i].stu_city);
        
        printf("Enter Student STANDARD : ");
        scanf("%d",&s1[i].stu_standard);
        
        printf("Enter Student SCHOOL : ");
        scanf("%s",&s1[i].stu_school);
        
        printf("\n\n");
    }
    
    printf("-----All Information----\n");
    
    for(int i=0; i<3; i++)
    {
        printf("\nStudent ID : %d",s1[i].stu_id);
        
        printf("\nStudent NAME : %s",s1[i].stu_name);
        
        printf("\nStudent AGE : %d",s1[i].stu_age);
        
        printf("\nStudent COURCE : %s",s1[i].stu_cource);
        
        printf("\nStudent CITY : %s",s1[i].stu_city);
        
        printf("\nStudent STANDARD : %d",s1[i].stu_standard);
        
        printf("\nStudent SCHOOL : %s",s1[i].stu_school);
        
        printf("\n\n");
    }


    //Question-2

    int size;
    printf("Enter Size : ");
    scanf("%d",&size);

    for(int i=0; i<size; i++)
    {
        printf("Enter Employee ID : ");
        scanf("%d",&c1[i].emp_id);
        
        printf("Enter Employee NAME : ");
        scanf("%s",&c1[i].emp_name);
        
        printf("Enter Employee AGE : ");
        scanf("%d",&c1[i].emp_age);
        
        printf("Enter Employee ROLE : ");
        scanf("%s",&c1[i].emp_role);
        
        printf("Enter Employee CITY : ");
        scanf("%s",&c1[i].emp_city);
        
        printf("Enter Employee EXPERIENCE : ");
        scanf("%d",&c1[i].emp_experience);
        
        printf("Enter Employee COMPANY : ");
        scanf("%s",&c1[i].emp_company_name);
        
        printf("\n\n");
    }
    
    printf("-----All Information----\n");
    
    for(int i=0; i<size; i++)
    {
        printf("\nEmployee ID : %d",c1[i].emp_id);
        
        printf("\nEmployee NAME : %s",c1[i].emp_name);
        
        printf("\nEmployee AGE : %d",c1[i].emp_age);
        
        printf("\nEmployee ROLE : %s",c1[i].emp_role);
        
        printf("\nEmployee CITY : %s",c1[i].emp_city);
        
        printf("\nEmployee EXPEEIENCE : %d",c1[i].emp_experience);
        
        printf("\nEmployee COMPANY NAME : %s",c1[i].emp_company_name);
        
        printf("\n\n");
    }


    return 0;
}