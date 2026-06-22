#include <stdio.h>
#include <string.h>

void bitStuffing(char data[])
{
    int count = 0;
    printf("Stuffed Data: ");
    for (int i = 0; i < strlen(data); i++)
    {
        if (data[i] == '1')
        {
            count++;
            printf("1");
        }
        else
        {
            count = 0;
            printf("0");
        }
        if (count == 5)
        { // Stuff a '0' after five 1s
            printf("0");
            count = 0;
        }
    }
}

int main()
{

    char data[] = "0111111101";
    printf("Original Data: %s\n", data);
    bitStuffing(data);
    return 0;
}