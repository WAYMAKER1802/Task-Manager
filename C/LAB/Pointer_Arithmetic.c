#include <stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'A', 'B', 'C'};

    int *pInt = a; // points to first element
    float *pFloat = b;
    char *pChar = c;

    printf("--- Before Increment ---\n");
    printf("pInt Address: %p, Value: %d\n", pInt, *pInt);
    printf("pFloat Address: %p, Value: %.1f\n", pFloat, *pFloat);
    printf("pChar Address: %p, Value: %c\n", pChar, *pChar);

    // Pointer increments
    pInt++;
    pFloat++;
    pChar++;

    printf("\n--- After Increment (p++) ---\n");
    printf("pInt Address: %p, Value: %d\n", pInt, *pInt);
    printf("pFloat Address: %p, Value: %.1f\n", pFloat, *pFloat);
    printf("pChar Address: %p, Value: %c\n", pChar, *pChar);

    // Pointer decrements
    pInt--;
    pFloat--;
    pChar--;

    printf("\n--- After Decrement (p--) back to original ---\n");
    printf("pInt Address: %p, Value: %d\n", pInt, *pInt);
    printf("pFloat Address: %p, Value: %.1f\n", pFloat, *pFloat);
    printf("pChar Address: %p, Value: %c\n", pChar, *pChar);

    return 0;
}
