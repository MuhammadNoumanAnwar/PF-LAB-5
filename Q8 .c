#include <stdio.h>

int countOnes(int n) {
    int count = 0;
    while (n) {
        count += n & 1; // Increment count if the last bit is 1
        n >>= 1;        // Right shift n to check the next bit

    int number;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Count the number of 1s in the binary representation
    int result = countOnes(number);

    // Print the result
    printf("The number of 1s in the binary representation of %d is: %d\n", number, result);

    return 0;
}

