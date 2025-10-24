// Toggle case of each character in a string

#include <stdio.h>

int main() {
    char text[1000];
    int index = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    printf("\nOriginal string: %s", text);
    
    while(text[index] != '\0') {
        if(text[index] >= 'a' && text[index] <= 'z') {
            text[index] = text[index] - 32;
        } else if(text[index] >= 'A' && text[index] <= 'Z') {
            text[index] = text[index] + 32;
        }
        index++;
    }
    
    printf("Toggled string: %s", text);
    
    return 0;
}