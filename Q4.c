#include <stdio.h>

int main() {
    int age;
    char cit;

    printf("Enter your age:\n");
    printf("Enter your citizenship (p for Pakistan, w for any country):\n");
    
    scanf("%d", &age);
    scanf(" %c", &cit); 
    if (age >= 18 && cit == 'p') {
        printf("You can vote.\n");
    } else {
        printf("You cannot vote.\n");
    }

    return 0;
}

