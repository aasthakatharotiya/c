#include <stdio.h>

struct movie{
    char title[100];
    char genre[100];
    char langugage[100];
    char hero[100];
    char heroin[100];
    int release_year;

}movie[100];

int main()
{
    int num, i;
    printf("Enter number of movie :");
    scanf("%d",&num);
    for(i=1; i<=num;i++)
	{
    	printf("\n---Enter Details of %d Movie Information---\n\n",i);
        printf("Enter title : ");
        scanf("%s",&movie[i].title);

        printf("Enter genre :");
        scanf("%s",&movie[i].genre);

        printf("Enter language :");
        scanf("%s",&movie[i].langugage);

        printf("Enter hero name :");
        scanf("%s",&movie[i].hero);

        printf("Enter heroin name :");
        scanf("%s",&movie[i].heroin);

        printf("Enter release year :");
        scanf("%d",&movie[i].release_year);
        
        printf("\n");
    } 
    for(i=1; i<=num; i++)
    {
    	printf("---%d Movie Information---\n\n",i);
        printf("Movie title is : %s\nMovie's genre is :%s\nMovie's language is : %s\nMovie's hero name is : %s\nMovie's heroin name is : %s\nMovie's release year is : %d\n",
        movie[i].title , movie[i].genre , movie[i].langugage , movie[i].hero ,movie[i].heroin , movie[i].release_year);
        
        printf("\n");
    }
    
    
    return 0;

}
