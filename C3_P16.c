#include <stdio.h>

void main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Palindrome numbers in the matrix are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int num = matrix[i][j], rev = 0, temp = num;
            while (temp > 0) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            if (num == rev) {
                printf("%d ", num);
            }
        }
    }
}
