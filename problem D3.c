#include <stdio.h>
int main() {
char encryptDecrypt(char input) {
    char key = 'K'; 
    return input ^ key; 
    char character, encrypted, decrypted;
    printf("Enter a character to encrypt: ");
    scanf(" %c", &character);
    encrypted = encryptDecrypt(character);
    printf("Encrypted character: %c\n", encrypted);
    decrypted = encryptDecrypt(encrypted);
    printf("Decrypted character: %c\n", decrypted);
    return 0;
}

