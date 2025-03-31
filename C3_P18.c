#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 1000

// Function to sort the string in alphabetical order
void sort_string(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[MAX_LEN];
    
    // Taking input string without using fgets
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Sorting the string
    sort_string(str);
    
    printf("Sorted string: %s\n", str);
    
    return 0;
}
