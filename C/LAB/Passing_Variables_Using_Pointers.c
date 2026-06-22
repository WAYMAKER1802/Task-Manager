#include <stdio.h>

// Function that modifies values using pointers
void updateValues(int *a, float *b, char *c)
{
    *a = *a + 10; // modify int
    *b = *b * 2;  // modify float
    *c = 'Z';     // modify char
}

int main()
{
    int x = 5;
    float y = 3.5;
    char z = 'A';

    printf("--- Before Function Call ---\n");
    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("z = %c\n", z);

    // Passing addresses (by reference)
    updateValues(&x, &y, &z);

    printf("\n--- After Function Call ---\n");
    printf("x = %d\n", x);   // now 15
    printf("y = %.2f\n", y); // now 7.00
    printf("z = %c\n", z);   // now Z

    return 0;
}
