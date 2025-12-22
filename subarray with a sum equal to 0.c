#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int found = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }
    if (found)
        printf("There exists a subarray with sum 0.\n");
    else
        printf("No subarray with sum 0 exists.\n");
    return 0;
}
