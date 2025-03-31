#include <stdio.h>

int main() {
    int A[50], B[50], mergedList[100];
    int sizeA, sizeB, i = 0, j = 0, k = 0;

    printf("Enter the number of elements in sorted Set A: ");
    scanf("%d", &sizeA);
    printf("Enter %d sorted elements: ", sizeA);
    for (int x = 0; x < sizeA; x++) {
        scanf("%d", &A[x]);
    }

    printf("Enter the number of elements in sorted Set B: ");
    scanf("%d", &sizeB);
    printf("Enter %d sorted elements: ", sizeB);
    for (int x = 0; x < sizeB; x++) {
        scanf("%d", &B[x]);
    }

    // Merging two sorted lists
    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            mergedList[k++] = A[i++];
        } else {
            mergedList[k++] = B[j++];
        }
    }
    while (i < sizeA) {
        mergedList[k++] = A[i++];
    }
    while (j < sizeB) {
        mergedList[k++] = B[j++];
    }

    // Printing merged sorted list
    printf("Merged Sorted List = { ");
    for (int x = 0; x < k; x++) {
        printf("%d ", mergedList[x]);
    }
    printf("}\n");

    return 0;
}
