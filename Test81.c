// Print each character of a string on a new line

#include <stdio.h>

int main() {
    char text[1000];
    int index = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    printf("\nEach character on a new line:\n");
    while(text[index] != '\0' && text[index] != '\n') {
        printf("%c\n", text[index]);
        index++;
    }
    
    return 0;
}