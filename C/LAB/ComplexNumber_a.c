#include <stdio.h>

// Structure to represent a complex number
struct Complex
{
    float real;
    float imag;
};

// Function to read a complex number
struct Complex readComplex()
{
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to write a complex number
void writeComplex(struct Complex c)
{
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex a, struct Complex b)
{
    struct Complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex a, struct Complex b)
{
    struct Complex res;
    res.real = a.real - b.real;
    res.imag = a.imag - b.imag;
    return res;
}

int main()
{
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);

    printf("\nFirst Complex Number: ");
    writeComplex(c1);

    printf("Second Complex Number: ");
    writeComplex(c2);

    printf("\nSum: ");
    writeComplex(sum);

    printf("Difference: ");
    writeComplex(diff);

    return 0;
}
