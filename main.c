#include <stdio.h>
#include <ctype.h>
#include <string.h>

void encrypt(char* text, int shift) {
    for (int i = 0; i < strlen(text); ++i) {
        if (isupper(text[i])) {
            // For uppercase letters
            text[i] = (char)(((text[i] - 'A') + shift) % 26 + 'A');
        } else if (islower(text[i])) {
            // For lowercase letters
            text[i] = (char)(((text[i] - 'a') + shift) % 26 + 'a');
        }
    }
}

int main() {
    char text[1000];
    int shift;

    printf("Enter the text to encrypt: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the key (shift value): ");
    scanf("%d", &shift);

    encrypt(text, shift);

    printf("Cipher text: %s\n", text);

    return 0;
}
/**
Enter the text to encrypt: Hello, how are you
Enter the key (shift value): 3
Cipher text: Khoor, krz duh brx

*/