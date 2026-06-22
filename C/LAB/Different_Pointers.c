#include <stdio.h>

int main()
{
    int a = 10;
    float b = 25.75;
    char c = 'X';

    int *pInt = &a;     // pointer to int
    float *pFloat = &b; // pointer to float
    char *pChar = &c;   // pointer to char

    printf("--- Pointer Details ---\n");

    printf("Integer pointer address: %p\n", pInt);
    printf("Integer value via pointer: %d\n", *pInt);

    printf("\nFloat pointer address: %p\n", pFloat);
    printf("Float value via pointer: %.2f\n", *pFloat);

    printf("\nChar pointer address: %p\n", pChar);
    printf("Char value via pointer: %c\n", *pChar);

    return 0;
}
