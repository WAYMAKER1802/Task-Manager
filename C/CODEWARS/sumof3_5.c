#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int sum = 0;
    if (number < 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < number; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                sum += i;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
