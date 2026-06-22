#include <stdio.h>
#include <string.h>

#define MAX_DATA_LENGTH 100
#define MAX_GENERATOR_LENGTH 20

void xorOperation(char *dividend, const char *divisor, int len)
{
    for (int i = 0; i < len; i++)
    {
        dividend[i] = (dividend[i] == divisor[i]) ? '0' : '1';
    }
}

void calculateCRC(char data[], char generator[], char crc[])
{
    int dataLen = strlen(data);
    int genLen = strlen(generator);

    // Append zeros to the data
    char dividend[MAX_DATA_LENGTH + MAX_GENERATOR_LENGTH];
    strcpy(dividend, data);
    for (int i = 0; i < genLen - 1; i++)
    {
        strcat(dividend, "0");
    }

    char temp[MAX_GENERATOR_LENGTH];
    strncpy(temp, dividend, genLen);

    for (int i = 0; i <= dataLen; i++)
    {
        if (temp[0] == '1')
        {
            xorOperation(temp, generator, genLen);
        }

        // Shift left and bring the next bit
        if (i + genLen < dataLen + genLen)
        {
            memmove(temp, temp + 1, genLen - 1);
            temp[genLen - 1] = dividend[i + genLen];
        }
    }

    strncpy(crc, temp + 1, genLen - 1);
    crc[genLen - 1] = '\0';
}

int main()
{
    char data[MAX_DATA_LENGTH], generator[MAX_GENERATOR_LENGTH], crc[MAX_GENERATOR_LENGTH];

    printf("Enter the data string (binary): ");
    scanf("%s", data);

    printf("Enter the generator polynomial (binary): ");
    scanf("%s", generator);

    calculateCRC(data, generator, crc);

    printf("Original Data: %s\n", data);
    printf("Generator Polynomial: %s\n", generator);
    printf("CRC: %s\n", crc);

    // Append CRC to the data
    strcat(data, crc);
    printf("Transmitted Data: %s\n", data);

    return 0;
}