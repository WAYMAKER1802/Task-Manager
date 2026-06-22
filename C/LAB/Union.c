#include <stdio.h>

// Union with 6 strings
union Address
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main()
{
    union Address adr;
    int choice;

    printf("Select your present address type:\n");
    printf("1. Home Address\n");
    printf("2. Hostel Address\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar(); // Clear newline from buffer

    if (choice == 1)
    {
        printf("Enter your Home Address: ");
        fgets(adr.home_address, sizeof(adr.home_address), stdin);
        printf("\n--- Present Address ---\n%s", adr.home_address);
    }
    else if (choice == 2)
    {
        printf("Enter your Hostel Address: ");
        fgets(adr.hostel_address, sizeof(adr.hostel_address), stdin);
        printf("\n--- Present Address ---\n%s", adr.hostel_address);
    }
    else
    {
        printf("Invalid choice!");
    }

    return 0;
}
