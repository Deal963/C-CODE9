// Reverse a string

#include <stdio.h>

int main() {
    char text[1000];
    char reversed[1000];
    int length = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    while(text[length] != '\0' && text[length] != '\n') {
        length++;
    }
    
    for(int i = 0; i < length; i++) {
        reversed[i] = text[length - 1 - i];
    }
    reversed[length] = '\0';
    
    printf("\nOriginal string: ");
    for(int i = 0; i < length; i++) {
        printf("%c", text[i]);
    }
    
    printf("\nReversed string: %s\n", reversed);
    
    return 0;
}