#include <stdio.h>


//Question-1

struct Book{
    int book_id;
    char book_title[100];
    char book_author[100];
    char book_genre[100];
    char book_publisher[100];
    int book_publisher_year;
    int book_price;
}b[100];



//Question-2

struct Car{
    int car_id;
    char car_make[100];
    char car_model[100];
    int car_year;
    char car_color[100];
    int car_price;
    int car_mileage;
}c[100];


//Question-3

enum DaysOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};


int main()
{
    //Question-1

    int book_size;
    printf("Enter Book Size : ");
    scanf("%d",&book_size);

    printf("\n");

    for(int i=0; i<book_size; i++)
    {
        printf("Enter Book ID : ");
        scanf("%d",&b[i].book_id);
        
        printf("Enter Book TITLE : ");
        scanf("%s",&b[i].book_title);
        
        printf("Enter Book AUTHOR : ");
        scanf("%s",&b[i].book_author);
        
        printf("Enter Book GENRE : ");
        scanf("%s",&b[i].book_genre);
        
        printf("Enter Book PUBLISHER : ");
        scanf("%s",&b[i].book_publisher);
        
        printf("Enter Book PUBLISHER YEAR : ");
        scanf("%d",&b[i].book_publisher_year);
        
        printf("Enter Book PRICE : ");
        scanf("%d",&b[i].book_price);
        
        printf("\n\n");
    }
    
    printf("-----All Information----\n");
    
    for(int i=0; i<book_size; i++)
    {
        printf("\nBook ID : %d",b[i].book_id);
        
        printf("\nBook TITLE : %s",b[i].book_title);
        
        printf("\nBook AUTHOR : %s",b[i].book_author);
        
        printf("\nBook GENRE : %s",b[i].book_genre);
        
        printf("\nBook PUBLISHER : %s",b[i].book_publisher);
        
        printf("\nBook PUBLISHER YEAR : %d",b[i].book_publisher_year);
        
        printf("\nBook PRICE : %d",b[i].book_price);
        
        printf("\n\n");
    }




    //Question-2

    int car_size;
    printf("Enter Car Size : ");
    scanf("%d",&car_size);

    printf("\n");

    for(int i=0; i<car_size; i++)
    {
        printf("Enter Car ID : ");
        scanf("%d",&c[i].car_id);
        
        printf("Enter Car MAKE : ");
        scanf("%s",&c[i].car_make);
        
        printf("Enter Car MODEL : ");
        scanf("%s",&c[i].car_model);
        
        printf("Enter Car YEAR : ");
        scanf("%d",&c[i].car_year);
        
        printf("Enter Car COLOR : ");
        scanf("%s",&c[i].car_color);
        
        printf("Enter Car PRICE : ");
        scanf("%d",&c[i].car_price);
        
        printf("Enter Car MILEAGE : ");
        scanf("%d",&c[i].car_mileage);
        
        printf("\n\n");
    }
    
    printf("-----All Information----\n");
    
    for(int i=0; i<car_size; i++)
    {
        printf("\ncar ID : %d",c[i].car_id);
        
        printf("\ncar MAKE : %s",c[i].car_make);
        
        printf("\ncar MODEL : %s",c[i].car_model);
        
        printf("\ncar YEAR : %d",c[i].car_year);
        
        printf("\ncar COLOR : %s",c[i].car_color);
        
        printf("\ncar PRICE : %d",c[i].car_price);
        
        printf("\ncar MILEAGE : %d",c[i].car_mileage);
        
        printf("\n\n");
    }


    //Question-3

    char* day[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };

    for (int i = Monday; i <= Sunday; i++) {
        printf("%s = %d\n", day[i], i);
    }

    return 0;
}
