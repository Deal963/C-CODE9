// Replace spaces with hyphens in a string

#include <stdio.h>

int main() {
    char text[1000];
    int index = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    printf("\nOriginal string: %s", text);
    
    while(text[index] != '\0') {
        if(text[index] == ' ') {
            text[index] = '-';
        }
        index++;
    }
    
    printf("Modified string: %s", text);
    
    return 0;
}