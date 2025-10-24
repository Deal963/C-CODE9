// Count spaces, digits, and special characters in a string

#include <stdio.h>

int main() {
    char text[1000];
    int spaceCount = 0, digitCount = 0, specialCount = 0;
    int index = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    while(text[index] != '\0' && text[index] != '\n') {
        char ch = text[index];
        
        if(ch == ' ') {
            spaceCount++;
        } else if(ch >= '0' && ch <= '9') {
            digitCount++;
        } else if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            specialCount++;
        }
        index++;
    }
    
    printf("\nNumber of spaces: %d\n", spaceCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of special characters: %d\n", specialCount);
    
    return 0;
}