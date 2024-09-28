#include <stdio.h>
int main() {
int number;
printf("Enter a number: ");
scanf("%d", &number);
const char *result = (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero";
printf("The number is: %s\n", result);
return 0;
}

