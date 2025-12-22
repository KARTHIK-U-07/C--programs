#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSubsets = pow(2, n);
    printf("Sums of all subsets:\n");
    for (int i = 0; i < totalSubsets; i++) {
        int sum = 0;
        printf("{ ");
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += arr[j];
                printf("%d ", arr[j]);
            }
        }
        printf("} -> Sum = %d\n", sum);
    }

    return 0;
}
