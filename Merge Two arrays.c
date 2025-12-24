#include <stdio.h>
int main() {
    int n1, n2, i, j;
    int arr1[50], arr2[50], arr3[100];
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    // Copy first array
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    // Copy second array
    for (j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}
