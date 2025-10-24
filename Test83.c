// Convert a lowercase string to uppercase without using built-in functions

#include <stdio.h>

int main() {
    char text[1000];
    int index = 0;
    
    printf("Enter a lowercase string: ");
    fgets(text, sizeof(text), stdin);
    
    while(text[index] != '\0') {
        if(text[index] >= 'a' && text[index] <= 'z') {
            text[index] = text[index] - 32;
        }
        index++;
    }
    
    printf("\nUppercase string: %s", text);
    
    return 0;
}