#include <stdio.h>
int sum_of_digits(int n) {
while (n >= 10) {
int sum = 0;
while (n > 0) {
sum += n % 10; 
n /= 10;       
}
n = sum; 
}
return n; 
}
int main() {
int number;
printf("Enter a number: ");
scanf("%d", &number);
int result = sum_of_digits(number);
printf("The single digit sum of the number is: %d\n", result);
return 0;
}

