#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LEN 100

// Function to sort student names using exchange sort
void exchange_sort(char names[][MAX_NAME_LEN], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[MAX_NAME_LEN];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    int n;
    char names[MAX_STUDENTS][MAX_NAME_LEN];
    
    // Taking input for number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character left by scanf
    
    // Taking input for student names
    printf("Enter the names of students:\n");
    for (int i = 0; i < n; i++) {
        fgets(names[i], MAX_NAME_LEN, stdin);
        names[i][strcspn(names[i], "\n")] = 0; // Remove newline character
    }
    
    // Sorting student names
    exchange_sort(names, n);
    
    // Display sorted names
    printf("Sorted student names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}
