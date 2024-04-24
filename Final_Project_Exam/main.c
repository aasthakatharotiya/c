#include <stdio.h>
#include <ctype.h>

#define BUFFER_SIZE 1024

void capitalize(char *str) {
    if (str == NULL) return;

    while (*str) {
        *str = toupper((unsigned char) *str);
        str++;
    }
}

int main() {
    FILE *file;
    char buffer[BUFFER_SIZE];

    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Sorry I'm enable to load file...");
    }

    if (fgets(buffer, BUFFER_SIZE, file) != NULL) 
    {
        capitalize(buffer);
    }
    else 
    {
        printf("Sorry I'm enable to load file...");
    }

    fclose(file);

    file = fopen("data.txt", "a");
    if (file == NULL)
    {
        printf("Sorry I'm enable to load file...");
    }

    fprintf(file, "\n\n\n---Capitalized Content---\n%s", buffer);
    // printf("Some Error in Append Mode");
    return 0;
}
