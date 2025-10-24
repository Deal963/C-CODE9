// Count frequency of a given character in a string

#include <stdio.h>

int main() {
    char text[1000];
    char target;
    int frequency = 0;
    int index = 0;
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    printf("Enter the character to count: ");
    scanf("%c", &target);
    
    while(text[index] != '\0' && text[index] != '\n') {
        if(text[index] == target) {
            frequency++;
        }
        index++;
    }
    
    printf("\nFrequency of '%c': %d\n", target, frequency);
    
    return 0;
}