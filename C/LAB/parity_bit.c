// #include <stdio.h>
// #include <stdlib.h>

// // Function to calculate the parity of a number
// int calculate_parity(unsigned char number)
// {
//     int ones_count = 0;

//     // Count the number of 1's in the binary representation
//     while (number != 0)
//     {
//         if (number % 2 == 1)
//         {
//             ones_count++;
//         }
//         number = number / 2;
//     }

//     // Return 0 for even parity, 1 for odd parity
//     return ones_count % 2;
// }

// int main()
// {
//     int input_number;

//     // Ask the user for a number
//     printf("Please enter a number between 0 and 255: ");
//     scanf("%d", &input_number);

//     // Validate the input
//     if (input_number < 0 || input_number > 255)
//     {
//         printf("Error: Number must be between 0 and 255!\n");
//         return 1;
//     }

//     // Convert input to an unsigned byte
//     unsigned char byte = (unsigned char)input_number;

//     // Calculate the parity
//     int parity = calculate_parity(byte);

//     // Display the binary representation
//     printf("\nYour number in binary is: ");
//     for (int i = 7; i >= 0; i--)
//     {
//         printf("%d", (byte >> i) & 1);
//     }

//     // Display the parity information
//     printf("\nNumber of 1's is: %s\n", parity == 0 ? "EVEN" : "ODD");
//     printf("Parity bit is: %d\n", parity);

//     return 0;
// }