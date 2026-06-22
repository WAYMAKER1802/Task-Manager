#include <stdio.h>
#include <string.h>

#define MAX_DATA_LENGTH 100

void byteStuffing(char data[])
{
    printf("Stuffed Data: FLAG ");
    for (int i = 0; i < strlen(data); i++)
    {
        if (data[i] == 'F' || data[i] == 'E')
        { // Add ESC before F/E
            printf("ESC ");
        }
        printf("%c ", data[i]);
    }
    printf("FLAG\n");
}

int main()
{
    char data[MAX_DATA_LENGTH];
    printf("Enter the data string (max %d characters): ", MAX_DATA_LENGTH - 1);
    fgets(data, MAX_DATA_LENGTH, stdin);

    // Remove newline character if present
    size_t len = strlen(data);
    if (len > 0 && data[len - 1] == '\n')
    {
        data[len - 1] = '\0';
    }

    if (strlen(data) == 0)
    {
        printf("Error: Data string cannot be empty.\n");
        return 1;
    }

    printf("Original Data: %s\n", data);
    byteStuffing(data);
    return 0;
}