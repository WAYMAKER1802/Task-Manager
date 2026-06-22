#include <stdio.h>

int hammingDistance(int a, int b)
{
    int xor = a ^ b, count = 0;
    while (xor)
    {
        count += xor & 1;
        xor >>= 1;
    }
    return count;
}

int main()
{
    int num1 = 9; // Binary: 1001
    int num2 = 5; // Binary: 0101
    printf("Hamming Distance: %d", hammingDistance(num1, num2));
    return 0;
}