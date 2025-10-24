// Count vowels and consonants in a string

#include <stdio.h>

int main() {
    char text[1000];
    int vowelCount = 0, consonantCount = 0;
    int index = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    while(text[index] != '\0' && text[index] != '\n') {
        char ch = text[index];
        
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
        index++;
    }
    
    printf("\nNumber of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);
    
    return 0;
}