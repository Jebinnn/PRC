#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char str[MAX_LEN];
    int freq[26] = {0};
    
    // Taking input string without using fgets
    printf("Enter a line of text: ");
    scanf("%[^\n]", str);
    
    // Count frequency of each alphabet (case insensitive)
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            freq[tolower(str[i]) - 'a']++;
        }
    }
    
    // Find the most frequently occurring alphabet
    int max_freq = 0;
    char max_char = 'a';
    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = 'a' + i;
        }
    }
    
    printf("Most occurring alphabet: %c\n", max_char);
    printf("Frequency: %d\n", max_freq);
    
    return 0;
}
