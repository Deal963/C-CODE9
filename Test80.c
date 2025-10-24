// Count characters in a string without using built-in length functions

#include <stdio.h>

int main() {
    char text[1000];
    int count = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    while(text[count] != '\0' && text[count] != '\n') {
        count++;
    }
    
    printf("\nNumber of characters: %d\n", count);
    
    return 0;
}