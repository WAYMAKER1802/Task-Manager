#include <stdio.h>
#include <math.h>

int calcRedundantBits(int m)
{
    int r = 0;
    while (pow(2, r) < m + r + 1)
        r++;
    return r;
}

void hammingCode(int data[], int m)
{
    int r = calcRedundantBits(m);
    int code[m + r + 1], j = 0, k = 0;

    // Initialize code array with data and parity bits
    for (int i = 1; i <= m + r; i++)
    {
        if (i == pow(2, k))
        {
            code[i] = 0; // Parity bit position
            k++;
        }
        else
            code[i] = data[j++];
    }

    // Calculate parity bits (even parity)
    for (int i = 0; i < r; i++)
    {
        int pos = pow(2, i);
        int count = 0;
        for (int j = pos; j <= m + r; j += 2 * pos)
            for (int k = j; k < j + pos && k <= m + r; k++)
                if (code[k] == 1)
                    count++;
        code[pos] = (count % 2 == 0) ? 0 : 1;
    }

    printf("Hamming Code: ");
    for (int i = 1; i <= m + r; i++)
        printf("%d", code[i]);
}

int main()
{
    int data[] = {1, 0, 1, 1}; // 4-bit data (1011)
    hammingCode(data, 4);
    return 0;
}