#include <stdio.h>

int main() {
    int A[50], B[50], unionSet[100], intersectionSet[50], differenceSet[50];
    int sizeA, sizeB, sizeU = 0, sizeI = 0, sizeD = 0;

    printf("Enter the number of elements in Set A: ");
    scanf("%d", &sizeA);
    printf("Enter %d elements: ", sizeA);
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements in Set B: ");
    scanf("%d", &sizeB);
    printf("Enter %d elements: ", sizeB);
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    // Finding Union (A U B)
    for (int i = 0; i < sizeA; i++) {
        unionSet[sizeU++] = A[i];
    }
    for (int i = 0; i < sizeB; i++) {
        int present = 0;
        for (int j = 0; j < sizeA; j++) {
            if (B[i] == A[j]) {
                present = 1;
                break;
            }
        }
        if (!present) {
            unionSet[sizeU++] = B[i];
        }
    }
    printf("A U B = { ");
    for (int i = 0; i < sizeU; i++) {
        printf("%d ", unionSet[i]);
    }
    printf("}\n");

    // Finding Intersection (A ∩ B)
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                intersectionSet[sizeI++] = A[i];
                break;
            }
        }
    }
    printf("A ∩ B = { ");
    for (int i = 0; i < sizeI; i++) {
        printf("%d ", intersectionSet[i]);
    }
    printf("}\n");

    // Finding Difference (A - B)
    for (int i = 0; i < sizeA; i++) {
        int present = 0;
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                present = 1;
                break;
            }
        }
        if (!present) {
            differenceSet[sizeD++] = A[i];
        }
    }
    printf("A - B = { ");
    for (int i = 0; i < sizeD; i++) {
        printf("%d ", differenceSet[i]);
    }
    printf("}\n");

    return 0;
}
